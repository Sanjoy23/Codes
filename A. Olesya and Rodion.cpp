#include <bits/stdc++.h>
using namespace std;

int main()
 {
     int n, t;
     cin >> n >> t;
     long long int i = pow(10, n-1);

     while(1){
        if(i % t != 0){
            i++;
        }else{
            break;
        }
     }
     cout<<i<<endl;
 }
