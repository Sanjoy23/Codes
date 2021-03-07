#include <bits/stdc++.h>
using namespace std;

int main()
{
    int tc;
    cin >> tc;
    while(tc--)
    {
        string s;
        cin >> s;
        int len = s.size();
        //cout<<len<<endl;
        int cnt = 0;
        vector<int> v;
        for(int i=0; i<len+1; i++)
        {
            if(s[i] == '1')
            {
                cnt++;

            }
            else
            {
                v.push_back(cnt);
                ///cout<<cnt<<endl;
                cnt  = 0;
            }
        }
        sort(v.rbegin(), v.rend());
        int result = 0;
        for( int i=0; i<v.size(); i+=2)
        {
            ///cout<<v[i]<<endl;
            result += v[i];

        }


        cout<<result<<endl;
    }


}
