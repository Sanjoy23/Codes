#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;
    string s;
    while(t--){

        int n;
        cin >> n;
        cin >> s;
        int cnt=0;
        while(1){

            int check = 0;

        for(int i=0; i<n-1; ){
            if(s[i] =='A' and s[i+1] =='P'){
                s[i+1]='A';
                i+=2;
                check++;
            }else{
            i++;
            }
        }
        if(check == 0) break;
        cnt++;
    }
    cout<<cnt<<endl;
    }

}
