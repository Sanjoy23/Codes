#include <bits/stdc++.h>
using namespace std;

int main()
{

    int tc;
    cin >> tc;
    while(tc--)
    {
        int n, k;
        cin >> n >> k;

        if(n & 1)
        {
            int ans = 1;
            k--;
            ans += n / k;

            if(n % k != 0) ans ++;
            cout
        }
    }
}
