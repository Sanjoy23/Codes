#include <bits/stdc++.h>
using namespace std;

int arr[200005];
int flag[200005];

int main()
{
    int tc;
    cin >> tc;
    while(tc--)
    {
        int n;
        cin >> n;
        memset(arr, 0, sizeof(arr));
        memset(flag, 0, sizeof(flag));
        for(int i = 0; i < n; i++) cin >> arr[i];
        sort(arr, arr+n);

        for(int i = 0; i < n/2; i++){
            cout<<arr[n-1-i]<<" "<<arr[0]<<endl;
        }


    }

}
