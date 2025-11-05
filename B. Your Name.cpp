#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
    int tc;
    cin >> tc;
    while(tc--)
    {
        int n;
        cin >> n;
        string s, t;
        cin >> s >> t;
        sort(s.begin(), s.end());
        sort(t.begin(), t.end());
        if(s == t) cout << "YES" << endl;
        else cout << "NO" << endl;
    }
}
