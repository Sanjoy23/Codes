#include <bits/stdc++.h>
using namespace std;

int main(){
    int tc;
    cin >> tc;


    int n;
    long int H;
    long int arr[9999];
    while(tc--){
        cin >> n >> H;

        for(int i=0; i<n; i++){
            cin >> arr[i];
        }
        sort(arr, arr+n);

        int check  = 0;
        int cnt = 0;
        while(1){
                if(H<= 0)break;

            if(cnt%2 == 0){
                H-= arr[n-1];
                cnt++;
            }else{
                H-=arr[n-2];
                cnt++;
            }
        }
        cout<<cnt<<endl;

    }


}
