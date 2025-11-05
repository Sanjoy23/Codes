#include <bits/stdc++.h>
using namespace std;

long long gcd(long long a, long long b)
{
    if(b != 0) gcd(b, a % b);
    else return a;
}

int main() {
	// your code goes here
    int tc;
    cin >> tc;
    while(tc--)
    {
        int n;
        cin >> n;
        long long arr[n + 4];
        for(int i = 0; i < n; i++){
         cin >> arr[i];
        }
        long long g = 0;
        for(int i = 0; i < n; i++) g = gcd(g, arr[i]);
        for(long long i = 2; ; i++)
        {
            if(gcd(g, i) == 1)
            {
                cout << i << endl;
                break;
            }
        }
    }
}
