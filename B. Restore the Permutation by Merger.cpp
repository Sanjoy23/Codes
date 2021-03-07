#include <bits/stdc++.h>
using namespace std;

int main(){
    int tc;
    cin >> tc;
    while(tc--){

        int n;
        cin >> n;
        int a[2*n+5];
        set<int> st;
        for(int i=0; i<2*n; i++)cin >> a[i], st.insert(a[i]);

        int a2[2000] = {0};

        for(int i=0; i<2*n; i++){
            if(a2[a[i]] == 0){
                cout<<a[i]<<" ";
                a2[a[i]] = 1;

            }
        }
        cout<<endl;

    }

}
