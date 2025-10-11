#include <bits/stdc++.h>
using namespace std;

int main() {
	int tc;
	cin >> tc;
	int n;
	while(tc--)
	{
	    cin >> n;
	    int arr[n + n + 5];
	    
	    for(int i = n; i >= 1; i--)
	    {
	        cout << i << " ";
	    }
	    cout << n;
	    for(int i = 1; i < n; i++)
	    {
	        cout << " " << i;
	    }
	    cout << endl;
	}

}
