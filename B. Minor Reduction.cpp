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
        long long len = str.size();
        int ans = -1;
        int j,l;

        for(int i = 0; i < len - 1; i++)
        {
            int x = str[i] - '0';
            int y = str[i+1] - '0';
            int z = x + y;
            if(z > ans)
            {
                ans = z;
                j = i;
                l = i + 1;
            }


        }

        string res = "";
        if(ans < 10)
        {
            string k = to_string(ans);
            for(int i = 0; i < j; i++)res += str[i];
            res += k;
            for(int i = l + 1; i < len; i++)res += str[i];
            cout<<res<<endl;
        }
        else
        {
            string k = to_string(ans);
            str[j] = k[0];
            str[l] = k[1];
            cout<<str<<endl;
        }




    }
}
