#include <bits/stdc++.h>
using namespace std;

int main()
{
    int tc;
    cin >> tc;
    while(tc--)
    {
        string str;
        cin >> str;
        int cnt0 = 0, cnt1 = 0;
        int len = str.size();
        for(int i = 0; i < len; i++)
        {
            if(str[i] == '0')cnt0++;
            else cnt1++;
        }
        //cout<<cnt0<<" "<<cnt1<<endl;
        int ans = min(cnt0, cnt1);
        if(ans % 2 == 0) cout<<"NET"<<endl;
        else cout<<"DA"<<endl;


        }
}
