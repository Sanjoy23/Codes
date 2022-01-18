#include <bits/stdc++.h>
using namespace std;
long long check[10000000];

int main()
{
    int tc;
    cin >> tc;

    while(tc--){
        int n;
        cin >> n;
        int arr[110], mx = 0;

        for(int i = 0; i < n; i++) {
            cin >> arr[i];
            if(arr[i] > mx)mx = arr[i];
        }
        int cnt = 0;
        for(int i=0; i<n; i++)
    {
        for(int j=i+1; j<n; j++)
        {
            /* If duplicate found then increment count by 1 */
            if(arr[i] == arr[j])
            {
                cnt++;
                break;
            }
        }
    }

        int ans = mx % (n-cnt+1);
        cout<<ans<<endl;



    }

}
