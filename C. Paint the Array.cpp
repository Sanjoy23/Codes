#include <bits/stdc++.h>
using namespace std;


int main()
{
    int tc;
    cin >> tc;

    while(tc--)
    {
        int n;
        cin >> n;
        int a[n+5];
        int mx = 0;
        for(int i = 0; i < n; i++)cin >> a[i], mx = max(mx, a[i]);

        int len = sqrt(mx);
        int flag = 0;

        for(int i = 2; i <=mx; i++)
        {
            int cnt = 0;
            for (int j = 0; j < n - 1; j++)
            {
                if(a[j] % i == 0 and a[j+1] % i == 0)break;
                else if ((a[j] % i != 0 and a[j+1] % i == 0) or (a[j] % i == 0 and a[j+1] % i != 0))
                {
                    cnt++;
                }
            }
            if(cnt == n-1)
            {
                cout<<i<<endl;
                flag = 1;
                break;
            }
        }
        if(!flag)cout<<0<<endl;
    }
}
