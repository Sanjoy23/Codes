#include <bits/stdc++.h>
using namespace std;

int main() {
    string str;
    int tc;
    cin >> tc;

    while (tc--){
        cin >> str;
        if(str.size() > 10){
            cout<<str[0]<<str.size() - 2<<str[str.size()-1]<<endl;
        }
        else {
            cout<<str<<endl;
        }
    }

}
