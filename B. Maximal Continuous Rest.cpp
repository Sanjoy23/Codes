#include <bits/stdc++.h>
using namespace std;


int main()
{
    int n;
    scanf("%d",&n);
    int arr[n+5];
    for(int i=0; i<n; i++)cin >> arr[i];
    int cnt = 0;
    int mx = -1;
    for(int i=0; i<n; i++)
    {
        if(arr[i] == 1)cnt++;
        else
        {
            break;
        }
    }

    for(int i=n-1; i>=0; i--)
    {
        if(arr[i] == 1)cnt++;
        else
        {
            break;
        }
    }
    mx = max(mx, cnt);
    cnt = 0;

    for(int i= 0; i<n ; i++)
    {
        if(arr[i] == 1)cnt++;
        else
        {
            mx = max(mx, cnt);
            cnt = 0;
        }

    }

    cout<<max(mx,cnt)<<endl;

}
