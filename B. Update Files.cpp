#include <bits/stdc++.h>
using namespace std;

typedef long long      ll;
int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(0);
  int tc;

  cin >> tc;
  while(tc--) {
    ll n, k, cur = 1, ans = 0;
    cin >> n >> k;
    while(cur < k){
        cur += min(cur, k);
        ans++;
    }
    ans += ceil((n - cur) / (k*1.0));
    cout<<ans<<endl;
  }
}

