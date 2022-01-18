#include <bits/stdc++.h>
using namespace std;

int main()
{
    int tc;
    cin >> tc;
    while(tc--)
    {
        long long int a[3], m, ans;
        cin >> a[0] >> a[1] >> a[2];
        sort(a, a + 3);
        if( a[0] + a [1] == a[2])cout<<"YES"<<endl;
        else if ( a[0] == a[1] and a[2] % 2 == 0) cout<<"YES"<<endl;
        else if( a[1] == a[2] and a[0] % 2 == 0) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }



}
