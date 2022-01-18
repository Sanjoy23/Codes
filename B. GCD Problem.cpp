#include <bits/stdc++.h>
using namespace std;


int main()
{
    int tc;
    cin >> tc;
    while(tc--)
    {
        long long n;
        cin >> n;
        long long a, b, c;
        c = 1;
        //n--;
        if(n % 2 == 0)
        {
            //c = 1
            b = 2;
            a = n - 3;
        }
        else if(n % 4 == 1)
        {
            b = n / 2 - 1;
            a = n / 2 + 1;
        }
        else if( n % 4 == 3)
        {
            b = n / 2 - 2;
            a = n / 2 + 2;
        }

        cout << a << " " << b << " "<< c << endl;
    }
}
