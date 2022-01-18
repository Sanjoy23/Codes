#include <bits/stdc++.h>
using namespace std;

int main(){
    int tc;
    cin >> tc;

    ///int n, arr[654321];

    while(tc--){
        int n;
        long long int arr[100000];

        cin >> n;

        for(int i=0; i<n; i++){
            cin >> arr[i];
        }
        long long int ans = 0;
        for(int i=1; i<n; i++){
            ans = max(ans, arr[i]*arr[i-1]);
        }

        cout<<ans<<endl;
    }


}
