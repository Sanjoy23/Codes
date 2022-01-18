#include <bits/stdc++.h>
using namespace std;


int main(){
    int tc;

    cin >> tc;

    int n;
    while(tc--){
        cin >> n;
        int a[n+5], b[n+5];

        for(int i=0; i<n; i++)cin >> a[i];
        for(int i=0; i<n; i++)cin >> b[i];

        int miniodd = 3*n;
        int minieven = 3*n;

        for(int i=0; i<n; i++){

            if(a[i]<b[0]){
                miniodd = i;
                ///cout<<'k'<<endl;
                break;
            }
        }

        for(int i=0; i<n; i++){

            if(a[0]<b[i]){
                minieven = i;
                ///cout<<'k'<<endl;
                break;
            }
        }

        cout<<min(miniodd,minieven)<<endl;
    }


}
