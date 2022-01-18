#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
int main()
{
    int tc;

    cin >> tc;

    while(tc--)
    {
        ll n;
        cin >> n;
        if(n % 25 == 0) cout<<0<<endl;
        else
        {
            int cnt = 0;
            while(n % 25 != 0)
            {
                ll k = n % 10;
                if(k != 5 && k != 0)
                {
                    n = n / 10;
                    cnt ++;
                   /// cout<<n<<endl;
                }
                else
                {
                    n = n / 100;
                    n = n * 10 + k;
                    cnt++;

                }
            }
            cout<<cnt<<endl;
        }
    }

}
