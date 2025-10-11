#include<bits/stdc++.h>
using namespace std;
const int inf = 9e18;
int main()
{
    int tc;
    cin >> tc;
    while(tc--)
    {
        int n;
        cin >> n;
        long long a[n + 5], b[n + 5];
        for(int i = 0; i < n; i++) cin >> a[i];
        for(int i = 0; i < n; i++) cin >> b[i];
        long long cnt = 0;
        for (int i = 0; i < n; i++)
        {
            cnt += (a[i] < b[i]);
        }
        if (cnt >= 2)
        {
            cout << "NO" << endl;
        }
        else if (cnt == 0)
        {
            cout << "YES" << endl;
        }
        else
        {
            long long mx = 0;
            long long mn = inf;
            for (int i = 0; i < n; i++)
            {
                if (a[i] < b[i])
                {
                    mx = b[i] - a[i];
                }
                else
                {
                    mn = min(mn, a[i] - b[i]);
                }
            }
            if (mx <= mn)
            {
                cout << "YES" << endl;
            }
            else
            {
                cout << "NO" << endl;
            }
        }
    }
}
