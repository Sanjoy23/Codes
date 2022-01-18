#include <bits/stdc++.h>
using namespace std;

int main(){
    int k;
    cin >> k;
    string s,t;
    while(k--){
        int n;
        cin >> n;
        cin >> s >> t;
        vector<char> vt;

        int cnt = 0,flag = 1,i1,j2;
        for(int i=0; i<n ;i++){
            if(s[i]!= t[i]){
                    cnt++;
                if(flag){
                    i1 = i;
                    flag = 0;
                }else{
                    j2 = i;
                }
            }
        }
        if(cnt != 2){
            cout<<"No"<<endl;
        }else{
            if(s[i1] == s[j2] and t[i1] == t[j2]){
                cout<<"Yes"<<endl;
            }else{
                cout<<"No"<<endl;
            }

        }
    }

}
