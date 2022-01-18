#include <bits/stdc++.h>
using namespace std;

int arr[200002];

int main() {
    int tc;
    int n;
    ///int arr[99999];

    cin >> tc;

    while(tc--) {
        memset(arr, 0 , sizeof(arr));
        cin >> n;
        for(int i = 1; i <= n; i++){
            cin >> arr[i];
        }
        arr[0] = 0;
        sort(arr+1, arr+n+1, greater<int>());

        //for(int i = 0; i <= n; i++)cout<<arr[i]<<endl;
        int r = 1, l = 1;
        int cost = 0;
        for (int i = 1; i < n + 1; i++) {
            if( i % 2 == 1){
                int temp = arr[i];
                arr[i] =  1 * r;
                //cout<<cost<<endl;
                cost += 2 * arr[i] * temp;

                r++;

            }else {
                int temp = arr[i];
                arr[i] = -1 * l;
                //cout<<cost<<endl;
                cost += 2 * abs(arr[i]) * temp;
                //cout<<cost<<endl;

                l++;
            }
        }
        cout<<cost<<endl;
        for (int i = 0 ; i < n; i++)cout<<arr[i]<<" ";
        cout<<arr[n]<<endl;
    }


}
