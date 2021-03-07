#include <bits/stdc++.h>
using namespace std;

int main(){
    int tc;
    cin >> tc;
    while(tc--){

        string s;
        cin >> s;
        int len = s.size();
        int l=0, r=0;
        int cnt = 0;

        for(int i=0; i<len; i++){
            if(s[i] == '1'){
                l = i;
                break;
            }
        }
        for(int i=len-1; i>=0; i--){
            if(s[i] == '1'){
                r = i;
                break;
            }
        }
        for(int i=l; i<r; i++){
            if(s[i] == '0'){
                cnt++;
            }
        }
        cout<<cnt<<endl;
    }


}
