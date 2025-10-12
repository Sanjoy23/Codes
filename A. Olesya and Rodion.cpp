#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, t;
    cin >> n >> t;
    string s;
    if(t < 10)
    {
        char x = t + '0';
        while(n--)
        {
            cout << x;
        }
        cout << endl;
    }
    else{
        if(n == 1) cout << -1 << endl;
        else{
            cout << 1;
            for(int i = 0; i < n - 1; i++)
            {
                cout<<0;
            }
        }
        cout << endl;
    }

}
