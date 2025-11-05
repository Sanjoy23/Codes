#include <bits/stdc++.h>
using namespace std;

int main()
{
    int tc;
    cin >> tc;
    int a, b;
    while(tc--)
    {
        cin >> a >> b;
        if(__builtin_clz(a) > __builtin_clz(b)) cout << -1 << endl;
        else if(a == b) cout << 0 << endl;
        else
        {
            cout << 2 << endl;
            int a1 = (1 << (31 - __builtin_clz(a) + 1)) -1;
            cout << a1 << endl; // 15
            cout << (a1 ^ a) << " ";
            a = a1;
            cout << (a ^ b) << endl;
        }
    }
}
