#include <bits/stdc++.h>
using namespace std;


int main() {
    int tc;
    cin >> tc;
    while(tc--) {
        int n;
        cin >> n;
        long long int h[n+5];
        long long int sum = 0;
        for(int i = 0; i < n; i++){
            cin >> h[i];
        }
        int flag = 1;
        for (int i = 0; i < n; i++){
            sum+= h[i];
            if(sum - i < 0){
                cout<<"NO"<<endl;
                flag = 0;
                break;
            }else{
                h[i] = i;
                sum-= i;
            }

        }
        if(flag)cout<<"YES"<<endl;
    }
}
