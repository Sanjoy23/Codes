#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
int main()
{
    int tc;
    cin >> tc;

    while(tc--)
    {
        int n;
        cin >> n;
        ll arr[70];
        int check[100000] = {0};
        for(int i = 0; i < n; i++)
        {
            cin >> arr[i];
            if(arr[i] < 100000)check[arr[i]]++;
        }
        int flag = 30;
        while(flag--)
        {
            for(int i = 0; i < n; i++)
            {
                if(arr[i] > n){
                        arr[i] = arr[i] / 2;
                        if(arr[i] < 100000)check[arr[i]]++;
                }
                if(arr[i] <= n && check[arr[i]] > 1)check[arr[i]]--, arr[i] = arr[i] / 2, check[arr[i]]++;
            }
        }
        int ans = 1;
        for(int i = 0; i < n; i++)
        {
            if(check[arr[i]] > 1 || arr[i] == 0) ans = 0;
        }
        if(ans)cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }

}
