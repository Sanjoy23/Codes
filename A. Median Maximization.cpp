#include <bits/stdc++.h>
using namespace std;

int main(){
    int tc;
    cin >> tc;
    int n, s;
    while(tc--){

        cin >> n >> s;

        int m = (n-1)/2;
        m = n-m;
        int ans = s/m;
        cout<<ans<<endl;
    }


}
