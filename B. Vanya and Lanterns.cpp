#include <bits/stdc++.h>
using namespace std;


int main()
{
    int n , l;
    cin >> n >> l;
    double a[n];
    for(int i=0; i<n; i++)cin >> a[i];
    sort(a, a+n);
    double ans = -1;
    for(int i=0; i<n-1 ; i++)
    {
        ans = max(ans, a[i+1]-a[i]);
    }


    ans /=2;
    ans = (a[0] > ans)? a[0]:ans;
    ans = (l-a[n-1] > ans)? l-a[n-1]:ans;
    printf("%0.10f\n",ans/2);


}
