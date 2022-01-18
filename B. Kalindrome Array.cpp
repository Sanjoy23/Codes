#include <bits/stdc++.h>
using namespace std;
int arr[200006];

int main()
{
    int tc;
    cin >> tc;
    while(tc--)
    {
        int n;
        cin >> n;
        memset(arr, 0, sizeof(arr));
        int c[200005] = {0};
        for(int i = 0; i < n; i++)
        {
            cin >> arr[i];
            c[arr[i]]++;
        }
        if(n <= 2) cout<<"YES"<<endl;
        else
        {
            int cnt = 0;

            for(int i = 1; i <= n; i++)
            {
                if(c[i]  % 2 == 1)cnt++;
            }
            if(cnt > 2) cout<<"NO"<<endl;
            else cout<< "YES" <<endl;
        }



    }

}
