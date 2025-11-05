#include <bits/stdc++.h>
using namespace std;

int main()
{
    int tc;
    cin >> tc;
    long long n;
    while(tc--)
    {
        cin >> n;
        long long a[n + 5];
        long long b[n + 5];
        for(int i = 0; i < n; i++) cin >> b[i];

        a[0] = 1;
        long long cnt = 1;
        for(int i = 1; i < n; i++)
        {
            long long idx = i + 1;
            long long d = b[i] - b[i - 1];
            if(d == idx)
            {
                a[i] = ++cnt;
            }
            else
            {
                a[i] = a[i - d];
            }
        }
        for(int i = 0; i < n - 1; i++) cout << a[i] << " ";
        cout << a[n - 1] << endl;
    }

}
