#include <bits/stdc++.h>
using namespace std;

int main()
{
    int tc;
    cin >> tc;
    int n, q;
    string s;
    while(tc--)
    {
        cin >> n >> q;
        int a[q + 3];
        cin >> s;
        int cntA  = 0, cntB = 0;
        for(int i = 0; i < q; i++)
        {
            cin >> a[i];
        }
        for(int i = 0; i < n; i++)
        {
            if(s[i] == 'A') cntA++;
            else cntB++;
        }
        for(int i = 0; i < q; i++)
        {
            if(cntB == 0) cout << a[i] << endl;
            else
            {
                int j = 0;
                int cnt = 0;
                while(a[i])
                {
                    if(s[j] == 'A') a[i] -= 1;
                    else a[i] /= 2;
                    cnt++;
                    j++;
                    if(j == n) j = 0;
                }
                cout << cnt << endl;
            }

        }
    }
}
