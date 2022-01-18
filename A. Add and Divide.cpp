#include <bits/stdc++.h>
using namespace std;


int main()
{
    int tc;
    cin >> tc;
    while(tc--)
    {
        long long a, b;
        cin >> a >> b;
        int res = 1e8;
        long long n = sqrt(a);
        for(int i = 0; i <= n; i++)
        {
            int cnt = 0;
            if(i == 0 and b == 1)continue;
            else
            {
                long long c = a;
                while( c != 0)
                {
                    c = c/(b+i);
                    cnt++;
                }
            }

            res = min(res, cnt + i);
        }
        cout<<res<<endl;




    }


}
