#include<bits/stdc++.h>
using namespace std;

void solve()
{
    int n, k;
    cin >> n >> k;
    int a[n + 4], b[k + 4];
    long long sum = 0;
    for(int i = 0; i < n; i++){
        cin >> a[i];
        sum += a[i];
    }
    for(int i = 0; i < k; i++) cin >> b[i];
    sort(a, a + n);
    sort(b, b + k);
    int m = n;
    for(int i = 0; i < k; i++)
    {
        if(m - b[i]>=0)
        {
            sum -= a[m - b[i]];
            m -= b[i];
            ///cout << m << endl;
        }
    }
    cout << sum << endl;
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
