#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);cout.tie(0);
    int tc;
    cin >> tc;
    while(tc--)
    {
        ll a, b, c;
        cin >> a >> b >> c;
        if((2 * b - c) % a == 0 && 2 * b - c > 0)cout<<"YES"<<endl;
        else if((2 * b - a) % c == 0 && 2 * b - a > 0) cout<<"YES"<<endl;
        else if((a + c) % (2*b) == 0) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;

    }
}
