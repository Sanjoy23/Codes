#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n;
    long long a;
    cin >> n >> a;
    long long arr[n + 5];
    int big = 0, small = 0;
    for(int i = 0; i < n; i++)
    {
        cin >> arr[i];
        if(arr[i] > a) big++;
        else if(arr[i] < a) small++;
    }

    if(small > big) cout << a - 1 << endl;
    else cout << a + 1 << endl;
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
