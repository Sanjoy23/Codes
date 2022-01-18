#include <bits/stdc++.h>
using namespace std;

int main()
{
    int tc;
    cin >> tc;

    string s;
    while(tc--)
    {
        cin >> s;
        int len = s.size();

        string s2="";
        int cnt = 0;

        if(len == 1)
        {
            if(s[0] == '0')cout<<'1'<<endl;
            else cout<<'0'<<endl;
        }
        else
        {
            for(int i=0; i<len-1; i++)
            {
                if(i == len-2 and s[i] == '0' and s[i+1] == '0')
                {
                    if(s[i] == '0')
                    {
                        cnt+=1;
                        s2+=s[i];
                        break;
                    }
                }
                else if(i == len-2 and s[i] == '0' and s[i+1] == '1')
                {
                    cnt+=1;
                    s2+=s[i];
                    break;

                }
                else if(i == len-2 and s[i] == '1' and s[i+1] == '0')
                {
                    cnt+=1;
                    s2+=s[i+1];
                    break;

                }


                if(s[i] == '0' and s[i+1] == '0')
                {
                    s2+=s[i];
                }
                else if(s[i] == '0' and s[i+1] == '1')
                {
                    cnt+=1;
                    s2="";
                }

            }

            cout<<min(2,cnt)<<endl;


        }


    }


}
