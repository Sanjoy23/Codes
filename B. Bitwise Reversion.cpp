#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
    int tc;
    cin >> tc;
    int x, y, z;
    while(tc--)
    {
        cin >> x >> y >> z;
        
        int flag = 1;
        
        for(int i = 0; i <= 31; i++)
        {
            int cnt = 0;
            if(x & (1 << i)) cnt++;
            if(y & (1 << i)) cnt++;
            if(z & (1 << i)) cnt++;
            if(cnt == 2)
            {
                flag = 0;
                break;
            }
        }
        
        if(flag) cout << "YES" << endl;
        else cout << "NO" << endl;
    }
}
