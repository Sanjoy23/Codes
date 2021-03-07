#include <bits/stdc++.h>
using namespace std;


int main(){
    int m, n;
    cin >> n >> m;
    int arr[n+5];
    for(int i=0; i<n; i++)cin >> arr[i];
    sort(arr, arr+n);
    int ans = 0;
    for(int i = 0; i < m; i++){
        if(arr[i]>0)break;
        else{
            ans+=arr[i];
        }
    }
    cout<<abs(ans)<<endl;

}
