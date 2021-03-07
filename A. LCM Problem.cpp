
#include <bits/stdc++.h>
using namespace std;


int main(){
    int tc;
    cin >> tc;
    while(tc--){
        int l,r,x,y;
        cin >> l >> r;
        if(r % l == 0){
            cout<<l<<" "<<r<<endl;
        }else if(2*l >r){
        cout<<-1<<" "<<-1<<endl;
        }else{

            cout<<l<<" "<<2*l<<endl;
        }

    }

}
