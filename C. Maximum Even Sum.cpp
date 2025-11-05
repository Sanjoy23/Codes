#include <bits/stdc++.h>
using namespace std;

int main()
{
    int tc;
    cin >> tc;
    long long a, b;
    while(tc--)
    {
        cin >> a >> b;
        if(a % 2 == 1 && b % 2 == 1) cout << a * b + 1 << endl;
        else if( b % 2 == 0)
        {
            if((((a * b / 2)) + 2) % 2 == 0)
            {
                cout << a * b / 2 + 2 << endl;
            }
            else cout << - 1 << endl;
        }
        else if(b % 2 == 1 && a % 2 == 0) cout << -1 << endl;
    }
}
