#include <bits/stdc++.h>
using namespace std;

const long long int MAXIN = 100000;
long long int a[MAXIN], b[MAXIN];

int main() {

    int tc;
    cin >> tc;
    while(tc--) {
        long long int A, B, n;
        cin >> A >> B >> n;
        long long int mx = 0;
        for(int i = 0; i < n; i++)cin >> a[i], mx = max(mx, a[i]);
        for(int i = 0; i < n; i++)cin >> b[i];

        long long int losthealth = 0, flag = 1;
        for(int i = 0; i < n; i++) {
            ///cout<<ceil(b[i] / (A*1.0))<<endl;
            losthealth += ceil(b[i] / (A*1.0)) * a[i];
        }

        B = B - (losthealth - mx);
        if(B <= 0)cout<<"NO"<<endl;
        else cout<<"YES"<<endl;
    }

}
