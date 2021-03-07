#include <bits/stdc++.h>
using namespace std;


int main()
{
    int n;
    cin >> n;
    int arr[n+6];
    int left=0,right=0;
    for(int i=0; i<n; i++)
    {
        cin >> arr[i];
        if(arr[i])right++;
        else left++;

    }

    int cnt0=0,cnt1=0,cnt=0;

    for(int i=0; i<n; i++)
    {
        if(arr[i]){
                cnt1++;
                cnt++;
                if(cnt1==right){
                    cout<<cnt<<endl;
                    return 0;
                }
        }else{
            cnt0++;
                cnt++;
                if(cnt0==left){
                    cout<<cnt<<endl;
                    return 0;

        }


    }



}

}
