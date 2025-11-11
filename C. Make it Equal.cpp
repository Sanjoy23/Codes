#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n, k;
    cin >> n >> k;
    int s[n + 5];
    for(int i = 0; i < n; i++){
        cin >> s[i];
    }
    map<int, int> mp;
    for(int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        mp[x % k]++;
    }
    for(int i = 0; i < n; i++)
    {
        int x = s[i] % k;
        if(mp[x])
        {
            mp[x]--;
            continue;
        }
        if(mp[k - x])
        {
            mp[k - x]--;
        }
    }
    int cnt = 0;
    for(auto m : mp)
    {
        if(m.second != 0) cnt++;
    }

    if(cnt) cout << "NO" << endl;
    else cout << "YES" << endl;
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
