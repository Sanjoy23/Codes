#include <bits/stdc++.h>
using namespace std;

int main()
 {
     int tc;
     cin >> tc;
     long long int x, y, a, b, ans = 0,k;
     while(tc--) {
        cin >> x >> y;
        cin >> a >> b;
        ans = a * x + a * y;
        if ( a < b) {
            k = a * abs(x-y) + b * min(x, y);
            ans = min(ans, k);
        }
        else{
            k = b * min(x, y) + a * abs(x - y);
            ans =min(ans, k);
        }
        cout<<ans<<endl;
     }

 }
