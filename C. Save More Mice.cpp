#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
long long mice[500000];
int main()
{
    int tc;
    cin >> tc;
    while(tc--)
    {
        ll n;
        int k;
        cin >> n >> k;
        memset(mice, 0, sizeof(mice));
        for(int i = 0; i < k; i++) cin >> mice[i];

        sort(mice, mice + k);

        int catPos = 0;
        ll ans = 0, i;
        for( i = k - 1; i >= 0; i--)
        {
            if(mice[i] <= catPos && mice[i] != n) break;
            ll d = n - mice[i];
            catPos += d;
            mice[i] += d;
            ans++;

        }
        cout<<ans<<endl;

    }

}
