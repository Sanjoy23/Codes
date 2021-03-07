#include <bits/stdc++.h>
using namespace std;


int main()
{
    int tc;
    cin >> tc;
    while (tc--)
    {
        int n, k;
        cin >> n >> k;

        int arr[n+5];
        cin >> arr[0];
        int mx = arr[0];
        int mn = 0;
        for(int i=1; i<n; i++){
                cin >> arr[i];
                if(mx > arr[i]){
                    mx = arr[i];
                    mn = i;
                }
        }


        //cout<<mn<<endl;
        int ans =0;
        int flag = 1;
        while(flag)
        {
            int  cnt = 0;
            for(int i=0; i<n; i++)
            {
                if(i != mn and arr[i]+arr[mn]<= k)
                {
                    cnt ++;
                    arr[i]+=arr[mn];
                    //cout<<"K"<<endl;
                }
            }
            if(cnt == 0)flag = 0;
            else
            {
                ans+=cnt;
                cnt = 0;
            }

        }
        cout<<ans<<endl;

    }

}
