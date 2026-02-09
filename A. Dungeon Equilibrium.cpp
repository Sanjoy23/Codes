#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n;
    cin >> n;
    int arr[n + 4];
    map<int, int> mp;
    for(int i = 0; i < n; i++)
    {
        cin >> arr[i];
        mp[arr[i]]++;
    }
    sort(arr, arr + n);
    int cnt = 0;
    map<int, bool> isChecked;
    for(int i = 0; i < n; i++)
    {
        if(mp[arr[i]] > arr[i] && !isChecked[arr[i]])
        {
            cnt += mp[arr[i]] - arr[i];
            isChecked[arr[i]] = true;
        }
        else if(mp[arr[i]] < arr[i] && !isChecked[arr[i]])
        {
            cnt += mp[arr[i]];
            isChecked[arr[i]] = true;
        }
    }
    cout << cnt << endl;
}

int main()
{
    int tc;
    cin >> tc;
    while(tc--)
    {
        solve();
    }
}
