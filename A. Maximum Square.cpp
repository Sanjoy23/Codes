#include <bits/stdc++.h>
using namespace std;


int main(){
    int k;
    cin >> k;
    while(k--){
        int n;
        cin >> n;
        int arr[n];
        int arr2[1005]={0};
        for(int i=0; i<n ;i++)cin >> arr[i], arr2[arr[i]]++;

        int mx = 0;
        int cnt = 0;
        for(int i=n; i>0; i--){
                cnt = 0;
            for(int j=0; j<n; j++){
                if(arr[j]>= i)cnt++;
            }
            if(cnt>=i){
                mx = max(mx, i);
                cnt = 0;
            }
        }

        cout<<mx<<endl;

    }


}
