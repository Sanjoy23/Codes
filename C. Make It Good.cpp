#include <bits/stdc++.h>
using namespace std;

int main(){
    int tc;
    cin >> tc;
    while(tc--){
        int n;
        cin >> n;
        int a[n+6];
        for(int i=0; i<n; i++)cin >> a[i];

        int pos = n-1;
        while(pos > 0 and a[pos-1]>= a[pos])pos--;
        while(pos > 0 and a[pos-1]<= a[pos])pos--;
        cout<< pos<<endl;

    }

}
