#include <bits/stdc++.h>
using namespace std;

int main()
{
    int tc;
    cin >> tc;
    string str;
    int n;
    while(tc--)
    {
        cin >> n;
        cin >> str;

        int s = 0, ans = 0;
        for(int i = 0; i < n; i++)
        {
            if (str[i] == '(') s++;
            else
            {
                if(s > 0) s--;
                else{
                    ans++;
                }
            }
        }
        cout << ans << endl;
    }
}
