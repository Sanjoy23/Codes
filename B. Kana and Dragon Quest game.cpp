#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

int main()
{
    int tc;
    cin >> tc;
    while(tc--)
    {
        ll x, n, m;
        cin >> x >> n >> m;
         x = x + n * 10;
         cout<<x <<endl;
         x = x / pow(2, n);
         cout<<x <<endl;
         x = x - (10 * m);
         cout<<x<<endl;
        if(x <= 0) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }
}
