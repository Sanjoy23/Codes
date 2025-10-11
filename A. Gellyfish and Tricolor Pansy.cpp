#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int tc, a, b, c, d;
	cin >> tc;
	while(tc--)
	{
	    cin >> a >> b >> c >> d;
	    if(a >= b && c >= b) cout<<"Gellyfish"<<endl;
	    else if(a >= d && c >= d) cout<<"Gellyfish"<<endl;
	    else cout << "Flower" << endl;
	}

}
