#include <bits/stdc++.h>
using namespace std;


int main()
{
    int tc;
    cin >> tc;
    int x, y;
    while( tc-- )
    {
        cin >> x >> y;
        int dis = x + y;
        int a = abs(x-y) / 2;
        int b = ((dis / 2) + y - a) / 2;
        cout<< a << " "<<b << endl;
    }

}
