#include <bits/stdc++.h>
using namespace std;


int main(){
    int tc;
    cin >> tc;
    string str;
    int n;
    while(tc--){
        cin >> n;
        str = "";

        for(int i=0; i<2*n; i++){
            if(i%2 == 0)str +='(';
            else str += ')';
        }
        cout<<str<<endl;

        for(int i=1; i<n; i++){

            for(int j=i; j<2*n-i; j+=2){
                str[j] = '(';
                str[j+1] = ')';
            }
            cout<<str<<endl;
        }
    }


}
