#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n;
    cin >> n;
    string s;
    cin >> s;

    int cnt = 0;
    for(int i = n - 1; i >= 0; i--)
    {
        if(s[i] != s[n - 1]) cnt++;
    }
    cout << cnt << endl;
}

int main() {
	// your code goes here
    int tc;
    cin >> tc;
    while(tc--)
    {
        solve();
    }
}
