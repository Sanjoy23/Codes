#include <bits/stdc++.h>
using namespace std;

int main(){
    int tc;

    cin >> tc;

    int a[3], m;
    while(tc--){
        cin >> a[0] >> a[1] >> a[2] >> m;

        sort(a, a+3);

        int maxpair = a[2]+a[1]+a[0]-3;
        int minpair = a[2] - a[1] - a[0] - 1;
        if(m >= minpair and m <= maxpair)cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }


}
