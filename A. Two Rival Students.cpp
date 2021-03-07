#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
    int n, x, a, b;
    cin >> n >> x >> a >> b;
    int dis = abs(a-b);
    int mx = max(a,b);
    int mn = min(a,b);


    for( ; mx < n && x>0; x--){
        mx++;
    }
    if(x){
        for(;mn>1 && x >0 ; x--){

            mn--;
        }
    }
    int result = max(dis,abs(mn-mx));
    cout<<result<<endl;

    }


}
