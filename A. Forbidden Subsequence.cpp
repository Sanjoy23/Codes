#include <bits/stdc++.h>
using namespace std;

int main()
{
    int tc;
    cin >> tc;
    while(tc--)
    {
        string str, str2;
        cin >> str >> str2;

        string  a = "", b = "", c = "", d = "";
        for(int i = 0; i < str.size(); i++)
        {
            if(str[i] == 'a')a+=str[i];
            else if(str[i] == 'b')b+=str[i];
            else if(str[i] == 'c')c+=str[i];
            else d+= str[i];
        }
        string res="";
        sort(d.begin(), d.end());
        if(a.size() == 0 or b.size() == 0 or c.size() == 0)
        {
            sort(str.begin(), str.end());
            cout<<str<<endl;
        }
        else if(str == str2){
            sort(str.begin(), str.end());
            cout<<str<<endl;
        }
        else
        {
            if(str2[0] == 'a' and str2[1] == 'b' and str2[2] == 'c')
            {
                res += a + c + b + d;
                //cout<<res<<endl;
            }
            else if(str2[0] == 'a' and str2[1] == 'c' and str2[2] == 'b')
            {
                res += a + b + c + d;
            }
            else if(str2[0] == 'b' and str2[1] == 'a' and str2[2] == 'c')
            {
                res +=  a + b + c + d;
            }
            else if(str2[0] == 'b' and str2[1] == 'c' and str2[2] == 'a')
            {
                res += a + c + b + d;
            }
            else if(str2[0] == 'c' and str2[1] == 'a' and str2[2] == 'b')
            {
                res += a + c + b + d;
            }
            else if(str2[0] == 'c' and str2[1] == 'b' and str2[2] == 'a')
            {
                res += a + b + c + d;
            }

            cout<<res<<endl;



        }



    }

}
