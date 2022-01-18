#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, m;
    scanf("%d %d", &n, &m);
    int arr[100006];
     long long int cnt = 0;
    for(int i = 1; i <= m; i++)
    {
        scanf("%d", &arr[i]);
        if( i == 1)cnt += arr[i] - 1;
        else if(arr[i - 1] <= arr[i]) cnt += arr[i] - arr[i - 1];
        else
        {
            cnt += n - arr[i - 1] + arr[i];
        }



    }

    printf("%lld\n", cnt);

}
