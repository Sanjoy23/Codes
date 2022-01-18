#include <bits/stdc++.h>
using namespace std;

int main() {
    int tc;
    cin >> tc;
    long long n, arr[200];

    while(tc--) {
        cin >> n;
        long long cnt = 0,x;
        for (int i = 1; i <= n; i++) {
            cin >> x;
            cnt = max(cnt, x - i);
        }
        cout << cnt <<endl;
    }

}
