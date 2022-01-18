#include <bits/stdc++.h>
using namespace std;

int main() {
    int tc;
    cin >> tc;
    while(tc--){
        int n;
        cin >> n;
        long long arr[n+6];

        for (int i = 0; i < n; i++) {
            cin >> arr[i];
        }
        string check = "NO";
        if (n % 2 == 0)cout<<"YES"<<endl;
        else {
            for (int i = 0; i < n-1; i++) {
                if (arr[i] >= arr[i+1]) {
                        check = "YES";
                        break;
                }
            }
            cout<<check<<endl;
        }

    }

}
