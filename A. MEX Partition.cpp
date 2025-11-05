#include <bits/stdc++.h>
using namespace std;


int main()
{
    int tc;
    int n;
    cin >> tc;

    while(tc--)
    {
        cin >> n;
        int arr[n + 6];
        map<int, int> mp;
        for(int i = 0; i < n; i++){
            cin >> arr[i];
            mp[arr[i]] = 1;
        }
        for(int i = 0; i <= 100; i++)
        {
            if(mp[i] == 0)
            {
                cout << i << endl;
                break;
            }
        }
    }
}
