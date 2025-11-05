#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int k;
    long long x;
    cin >> k >> x;
    long long n = 1ll << k;
    long long a = x, b = 2 * n - x;
    vector<long long> ans;
    while(a != n)
    {
        if(a > b)
        {
            a -= b;
            b *= 2;
            ans.push_back(2);
            ///cout << 2 << ": " << a << " " << b << endl;
        }
        else
        {
            b -= a;
            a *= 2;
            ans.push_back(1);
            ///cout << 1 << ": " << a << " " << b << endl;
        }
    }
    cout << ans.size() << endl;
    while(!ans.empty())
    {
        cout << ans.back() << " ";
        ans.pop_back();
    }
    cout << endl;
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
