#include <bits/stdc++.h>
using namespace std;


int main(){

    int tc;
    cin >> tc;

    while(tc--){
        int n, k;
        int arr[100000];
        cin >> n >>k;
        for(int i=0; i<n; i++)cin >> arr[i];

        int ans = -99999;


        for(int i=1 ;i<n; i++){
                int temp = k*(arr[i]|arr[i-1]);
                temp = (i+1)*i - temp;
                ///cout<<temp<<" "<<ans<<endl;
                ans = max(ans, temp);
        }
        cout<<ans<<endl;
    }

}
