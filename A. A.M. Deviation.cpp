#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while(t--) {
        long long a, b, c, sum = 0, m, r;
        cin >> a >> b >> c;
        sum = a + c + b;
        if(sum % 3 == 0) cout<<0<<endl;
        else if(sum % 3 == 1) cout<<1<<endl;
        else if( sum % 3 == 2)cout<<1<<endl;
    }
}
