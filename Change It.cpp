#include <bits/stdc++.h>
using namespace std;

int main(){
    int tc, n;

    cin >> tc;
    while(tc--){
        int arr[120];
        int arr2[120] = {0};
        cin >> n;
        for(int i=0; i<n; i++){
            cin >> arr[i];
            arr2[arr[i]]++;
        }
        int mx=0;
        for(int i=0; i<110; i++){
            if(arr2[i]> mx){
                mx=arr2[i];
            }
        }
        cout<<n-mx<<endl;
    }

}
