#include <bits/stdc++.h>
using namespace std;

void  solve()
{
    int a, b, n;
    cin >> a >> b >> n;
    int k = a/b;
    if( k >= n || a == b)
    {
        cout << 1 << endl;
    }
    else cout << 2 << endl;
}

int main()
{
    int tc;
    cin >> tc;
    while(tc--)
    {
        solve();
    }
}
