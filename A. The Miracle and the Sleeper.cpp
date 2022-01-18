#include<bits/stdc++.h>
using namespace std;

int main()
{
    int tc;
    cin >> tc;
    long long int l, r;
    while(tc--)
    {
        cin >> l >> r;

        long long int m = r/2 + 1;
        if (l <= m)
        {
            cout<< r%m <<endl;
        }
        else
        {
            cout  << abs(l-r) << endl;
        }

    }


}
