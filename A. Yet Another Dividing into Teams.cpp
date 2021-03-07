#include <bits/stdc++.h>
using namespace std;

int main(){

    int q;
    cin >> q;


    while(q--){

        int n;
        cin >> n;
        int a[n+5];
        for(int i=0; i<n; i++)cin >> a[i];


        if(n == 1){
            cout<<1<<endl;
        }else if(n == 2){
            if(abs(a[0]-a[1])>1){
                cout<<1<<endl;
            }
            else{
                cout<<0<<endl;
            }
        }else{
            sort(a, a+n);
            int cnt = 0;
            for(int i=1; i<n; i++){
                    cout<<"kk"<<endl;
                if(abs(a[i-1]-a[i])==1 ){
                    cnt++;
                    cout<<"ccc"<<endl;
                }
            }

            cout<<ceil(cnt/(2*1.0))<<endl;


        }

    }


}
