#include <bits/stdc++.h>
using namespace std;

int main(){
    int tc;
    cin >> tc;
    while(tc){
        int n, T;
        cin >> n >> T;
        int arr[n+5], x[n+5], y[n+5], z[n+5];
        int mid = T/2;
        int k=0,l=0,m=0;
        for(int i=0; i<n ; i++){
                cin >> arr[i];
                if(arr[i] < mid)x[k++] = arr[i];
                else if(arr[i]> mid)z[l++] = arr[i];
                else y[m] = arr[i];
        }

    }

}
