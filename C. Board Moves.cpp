#include <bits/stdc++.h>
using namespace std;


int main() {
    int tc;
    long long n, k, i;

    cin >> tc;
    while(tc--)
    {
        cin >> n;
        /*unsigned long long ans = 0;

        k = (n + 1)/ 2;
        for( i = 1; i < k; i++){
            ans += 8 * i * i;
        }*/
        unsigned long long ans = (n*n*n - n) / 24;
        cout<< ans * 8 <<endl;
    }

}
