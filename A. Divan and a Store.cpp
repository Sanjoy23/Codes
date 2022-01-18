#include <bits/stdc++.h>
using namespace std;


int main()
{
    int tc;
    cin >> tc;
    long long l, r, k;
    int n;

    while(tc--)
    {
        long long cnt = 0, spend = 0;
        cin >> n >> l >> r >> k;
        long long arr[n+5];
        for (int i = 0; i < n; i++)cin >> arr[i];
        sort(arr, arr+n);
        for (int i = 0; i < n; i++)
        {
            if(arr[i] >= l and arr[i] <= r)
            {
                if(spend + arr[i] <= k)
                {
                    cnt++;
                    spend += arr[i];
                }
            }
        }

        cout<<cnt<<endl;

    }

}
