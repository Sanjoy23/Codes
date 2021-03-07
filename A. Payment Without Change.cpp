#include<bits/stdc++.h>
using namespace std;


int main(){
    int a, b, n, s;
    int q;
    cin >> q;
    while(q--){
        cin >> a >> b >> n >> s;
        int d = s/(n*1.0);
        ///cout<<d<<endl;
        if(d <=  a){
            s -= d*n;
        }else{
            s-= a*n;
        }
        s = s-b;
        if(s <=0) cout<<"YES"<<endl;
        else{
            cout<<"NO"<<endl;
        }
    }


}
