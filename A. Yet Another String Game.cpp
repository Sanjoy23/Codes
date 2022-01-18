#include <bits/stdc++.h>
using namespace std;

int main() {
    int tc;
    cin >> tc;
    string str;
    while(tc--) {
        cin >> str;
        int lenstr = str.size();
        for(int i = 0; i< lenstr; i++){
            if(i % 2 == 0){
                    if (str[i] != 'a') str[i] = 'a';
                    else str[i] = 'b';

            }else {
                if (str[i] != 'z') str[i] = 'z';
                else str[i] = 'y';
            }
        }
        cout<<str<<endl;
    }


}
