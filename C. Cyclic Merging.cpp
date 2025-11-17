#include <bits/stdc++.h>
using namespace std;

void  solve()
{
    int n;
    cin >> n;
    int arr[n + 5];
    for(int i = 0; i < n; i++) cin >> arr[i];
    long long ans = 0, x = 0;
    for(int i = 0; i < n; i++)
    {
        long long mx = max(arr[i], arr[(i + 1) % n]);
        ans += mx;
        x = max(mx, x);
    }
    cout << ans - x << endl;
    return;
}

int main()
{
    int tc;
    cin >> tc;
    while(tc--)
    {
        solve();
    }
}
