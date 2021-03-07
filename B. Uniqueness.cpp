#include <bits/stdc++.h>
using namespace std;

int main(){

        int n;
        cin >> n;

        int arr[n+6];
        for(int i=0; i<n; i++){
            cin >> arr[i];
        }


        int arr2[2002]={0};

       // sort(arr, arr+n);

        int temp=0, temp1=0;
        for(int i =0; i<n-1 ;i++){
            if(arr[i] == arr[i+1]) temp = i+1;
        }


        for(int i =n; i>0 ;i--){
            if(arr[i] == arr[i-1]) temp1 = i;
        }

        cout<<abs(temp-temp1)<<endl;





}
