#include <bits/stdc++.h>
using namespace std;


int main(){
    long long coins[7], n,a,b,c;
    int t;
    cin >> t;

    while(t--){
        cin >> coins[0] >> coins[1] >> coins[2] >> n;
        sort(coins, coins+3);
        a = coins[0], b = coins[1], c = coins[2];

        long long cnt=0;
        cnt += abs(coins[2]-coins[1]) + abs(coins[2]-coins[0]);

        if(coins[0] == coins[1] == coins[2] && n== 0){
            cout<<"YES"<<endl;
        }
        else if (coins[0] != coins[1] != coins[2] && n== 0){
            cout<<"NO"<<endl;
        }
        else if(abs(n-cnt)%3 == 0){
                ///cout<<n-cnt<<endl;
            cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }
    }

}
