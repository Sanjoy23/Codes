#include <bits/stdc++.h>
using namespace std;


int main() {
    int tc;
    cin >> tc;
    long long items[100];
    int n;
    while(tc--) {
        cin >> n;
        long long int cnt = 1;
        for (int i = 0; i < n; i++){
                cin >> items[i];
        }
        for (int i = 0; i < n; i++){
            while(items[i] % 2 == 0){
                items[i] = items[i] / 2;
               //cout<<items[i]<<endl;
                cnt *= 2;
                //cout<<cnt<<endl;
            }


        }
        //cout<<cnt<<endl;
        sort(items, items+n);
        long long res = 0;
        items[n-1] = items[n-1] * cnt;
        for (int i = 0; i<n; i++) res += items[i];
        cout<<res<<endl;
    }

}
