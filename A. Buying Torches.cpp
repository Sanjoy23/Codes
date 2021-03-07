#include <bits/stdc++.h>
using namespace std;


int main()
{
    int tc;
    cin >> tc;

    while(tc--){
        long long int x, y, k;
        cin >> x >> y >> k;

        long long int result;
        result = (k + y*k)/(x*1.0);
        cout<<result<<endl;
    }

}
