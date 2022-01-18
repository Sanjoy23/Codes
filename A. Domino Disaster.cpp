#include <bits/stdc++.h>
using namespace std;


int main(){
    int tc;
    int n;
    string s;
     cin >> tc;
     while(tc--){
        cin >> n;
        cin >> s;
        ///int len = s.size();
        string ans;
        for(int i=0; i<n; i++){
            if(s[i] == 'L')ans += 'L';
            if(s[i] == 'U')ans += 'D';
            if(s[i] == 'R')ans += 'R';
            if(s[i] == 'D')ans += 'U';
        }

        cout<<ans<<endl;
     }

}
