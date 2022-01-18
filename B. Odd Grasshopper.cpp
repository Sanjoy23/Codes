#include <bits/stdc++.h>
using namespace std;

int main()
{
    int tc;
    cin >> tc;
    long long x, n;
    while(tc--)
    {
        cin >> x >> n;
        long long m, r, k;

        if(n%2 == 0)
        {
            m = n / 2;
            if (m % 2 == 0)
            {
                cout<<x<<endl;
            }
            else
            {
                if (x%2 == 0)cout<<x+1<<endl;
                else cout<<x-1<<endl;

            }
        }
        else
        {
            m = n / 2;
            if (m % 2 == 0)
            {
                if(x%2 == 0)cout<<x-n<<endl;
                else
                {
                    cout<<x+n<<endl;
                }
            }
            else
            {
                if(x%2 == 0)cout<<x+1+n<<endl;
                else
                {
                    cout<<x-1-n<<endl;
                }

            }

        }


    }

}
