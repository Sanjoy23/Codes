#include <bits/stdc++.h>
using namespace std;

int main(){
    int tc;
    int n;
    string str;
    cin >> tc;

    while(tc--){
        cin >> n;
        cin >> str;
        int cnt = 0;

        cnt += str[n-1] - '0';

        for(int i = n-2; i>=0; i--){
            if(str[i] - '0' != 0){
                cnt+= 1+ str[i] - '0';
            }
        }

        cout<<cnt<<endl;
    }


}
