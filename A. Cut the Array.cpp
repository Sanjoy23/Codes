#include<bits/stdc++.h>
using namespace std;

void solve()
{
    int n;
    cin >> n;
    int arr[n + 5];
    int sum = 0;
    for(int i = 0; i < n; i++)
    {
        cin >> arr[i];
        sum += arr[i];
    }
    if(sum % 3 != 0)
    {
        cout << 0 <<" " << 0 << endl;
        return;
    }
    else
    {
        cout << 1 << " " << 2 << endl;
    }
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
