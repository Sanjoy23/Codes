#include <bits/stdc++.h>
using namespace std;
int a[300005];

int main()
{
     int n, q, l, r;
     long long k;
     scanf("%d %d %lld", &n, &q, &k);
    ///cin >> n >> q >> k;

    for(int i = 1; i <= n; i++) scanf("%d", &a[i]);

    while(q--)
    {
        ///cin >> l >> r;
        scanf("%d %d", &l, &r);
        long long ans = 0;
        ans += a[l] - 1;

        /*for(int i = l+1; i < r; i++)
        {
            ans += a[i] - a[i-1] - 1 + a[i+1] - a[i] - 1;
        }*/
        ans += 2*(a[r] - a[l] - (r-l));
        /*if(r == n)
        {
            ans += a[r] - a[r-1] + k - a[r] -1;
        }
        else
        {
            ans += a[r] - a[r-1] -1 + k - a[r];
        }*/
        ans +=  k - a[r];
        //cout<<ans<<endl;
        printf("%lld\n", ans);

    }


}
