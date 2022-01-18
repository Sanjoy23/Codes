#include <bits/stdc++.h>
using namespace std;

int main()
{
    int tc;
    cin >> tc;

    while(tc--)
    {
        int n, x;
        cin >> n;
        int arr[n+5];
        for(int i = 0; i<n; i++)cin >> arr[i];
        sort(arr, arr+n);

        int ans = arr[0];
        for (int i = 1; i < n; i++){
            ans = max(ans, arr[i] - arr[i-1]);
        }
        cout << ans <<endl;

    }

}
