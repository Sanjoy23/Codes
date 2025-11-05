#include <bits/stdc++.h>
using namespace std;

int main()
{
    int tc;
    cin >> tc;
    int n;
    while(tc--)
    {
        cin >> n;
        int v;
        int cnt1 = 0, cnt0 = 0;
        for(int i = 0; i < n; i++)
        {
            cin >> v;
            if(v == -1) cnt1++;
            else if(v == 0) cnt0++;
        }
        int ans = 0;
        if(cnt1 % 2 == 1) ans += 2;
        cout << ans + cnt0 << endl;
    }
}
