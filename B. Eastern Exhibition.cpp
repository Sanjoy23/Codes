#include <bits/stdc++.h>
using namespace std;

int main() {
    int tc;
    cin >> tc;
    while(tc--) {
        int n;
        cin >> n;
        long long x[n+4], y[n+4];
        for(int i = 0; i < n; i++)cin >> x[i] >> y[i];
        if(n % 2 != 0) cout<<1<<endl;
        else{
            sort(x, x+n);
            sort(y, y+n);
            long long nx = x[n / 2] - x[n / 2 - 1] + 1;
            long long ny = y[n / 2] - y[n / 2 - 1] + 1;
            cout<<nx*ny<<endl;
        }
    }
}
