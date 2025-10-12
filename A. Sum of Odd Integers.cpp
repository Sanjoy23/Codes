#include <bits/stdc++.h>
using namespace std;


int main()
{
    int tc;
    cin >> tc;
    long long n, k;
    while(tc--)
    {
        cin >> n >> k;

        if(k * k <= n && n % 2 == k % 2)
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }
}
