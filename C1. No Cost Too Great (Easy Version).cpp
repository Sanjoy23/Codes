#include <bits/stdc++.h>
using namespace std;

int main()
{
    int tc;
    cin >> tc;
    int n;
    while(tc--)
    {
        cin >> n;
        int a[n + 4], b[n + 4];
        for(int i = 0; i < n; i++) cin >> a[i];
        for(int i = 0; i < n; i++) cin >> b[i];

        int even = 0;
        for(int i = 0; i < n; i++)
        {
            if(a[i] % 2 == 0) even++;
        }

        if(even >= 2) cout << 0 << endl;
        else if(even == 1) cout << 1 << endl;
        else cout << 2 << endl;
    }
}
