#include <bits/stdc++.h>
using namespace std;

void solve(long long n)
{
    if(n & 1) {
        cout << "YES" << endl;
        return;
    }

    while(n > 1)
    {
        ///cout << n << endl;
        if(n % 2 == 0) n = n / 2;
        else{
            cout << "YES" << endl;
            return;
        }
    }
    cout << "NO" << endl;
    return;
}

int main()
{
    int tc;
    cin >> tc;
    long long n;
    while(tc--)
    {
        cin >> n;
        solve(n);
    }
}
