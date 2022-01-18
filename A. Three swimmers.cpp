#include <bits/stdc++.h>
using namespace std;

int main()
{
    int tc;
    cin >> tc;
    while(tc--)
    {
        long long p, a, b, c;
        cin >> p >> a >> b >> c;

        if( p % a == 0 or p % b == 0 or p % c == 0 )cout << 0 <<endl;
        else
        {
            long long ans = min(a - (p % a), min(b - (p % b), c - (p % c)));
            cout<<ans<<endl;
        }


    }


}
