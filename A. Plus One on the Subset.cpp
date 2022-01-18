#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

int main()
{
    int tc;
    cin >> tc;
    while(tc--)
    {
        ll n;
        cin >> n;
        int arr[60];
        for(int i = 0; i < n; i++)cin >> arr[i];
        sort(arr, arr+n);
        ll ans = arr[n-1] - arr[0];
        cout<< ans << endl;
    }
}
