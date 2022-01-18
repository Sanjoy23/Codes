#include <bits/stdc++.h>
using namespace std;

int main()
{
    int tc;
    cin >> tc;
    int n,m;
    while(tc--)
    {
        cin >> n >> m;
        if(m % 2 == 0 and m % 3 == 0)
        {
            cout<< n*m / 3 <<endl;
        }
        else if(m % 2 == 0 and m % 3 != 0) cout<< n*m / 2<<endl;
        else
        {

            cout<< ceil(m * n / (3*1.0))<<endl;
        }
    }
}
