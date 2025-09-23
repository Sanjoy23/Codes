#include<bits/stdc++.h>
using namespace std;

int main()
{
    int tc;
    cin >> tc;
    string s;
    int n, k;
    while(tc--)
    {
        cin >> n >> k;
        cin >> s;
        int cnt0 = 0, cnt1 = 0;
        int len = s.size();
        for(int i = 0; i < len; i++)
        {
            if(s[i] == '0') cnt0++;
            else cnt1++;
        }
        while(k--)
        {
            if(cnt0 > cnt1) cnt0 -= 2;
            else cnt1 -= 2;
        }
        if(cnt0 == cnt1) cout << "YES" << endl;
        else cout << "NO" << endl;
    }
}
