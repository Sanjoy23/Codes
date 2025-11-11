#include <bits/stdc++.h>
using namespace std;


void solve()
{
    int n, m, p;
    cin >> n >> m;
    multiset<int> ms;
    int a[n + 2], b[m + 3], c[m + 3];
    for(int i = 0; i < n; i++)
    {
        cin >> a[i];
        ms.insert(a[i]);
    }
    for(int i = 0; i < m; i++) cin >> b[i];
    for(int i = 0; i < m; i++) cin >> c[i];
    vector< pair <int, int>> m1;
    vector < int > m2;

    for(int i = 0; i < m; i++)
    {
        if(c[i] > 0)
        {
            m1.push_back({b[i], c[i]});
        }
        else{
            m2.push_back(b[i]);
        }
    }
    sort(m1.begin(), m1.end());
    sort(m2.begin(), m2.end());
    int ans = 0;
    for(auto& i : m1)
    {
        auto it = ms.lower_bound(i.first);
        if(it != ms.end())
        {
            int val = *it;
            ms.erase(it);
            ms.insert(max(val, i.second));
            ans++;
        }
    }

    for(auto& i : m2)
    {
        auto it = ms.lower_bound(i);
        if(it != ms.end())
        {
            ms.erase(it);
            ans++;
        }
    }
    cout << ans << endl;
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
