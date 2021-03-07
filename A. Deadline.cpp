#include <bits/stdc++.h>
using namespace std;


int main(){
    int t;
    cin >> t;
    while(t--){
        int n, d;
        cin >> n >> d;
        int flag = 0;
        if(n == d){
            cout<<"YES"<<endl;
        }else{

        for (int i=0; i<=n; i++){
            int temp=ceil(d/(i*1.0+1.0));
            ///cout<<temp<<endl;
            if(temp <= n-i && flag ==    0){
                cout<<"YES"<<endl;
                flag = 1;

            }
        }
        if(!flag){
            cout<<"NO"<<endl;
        }

    }
    }


}
