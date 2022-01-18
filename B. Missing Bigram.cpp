#include <bits/stdc++.h>
using namespace std;


int main()
{
    int tc;
    cin >> tc;
    while(tc--)
    {
        int n;
        cin >> n;
        string str;
        string res = "";
        if(n-2 == 1)
        {
            cin >> str;
            if(str[0] == str[1] and str[0] == 'a')cout<<"aab"<<endl;
            else if(str[0] == str[1] and str[0] == 'b')cout<<"bba"<<endl;
            else cout<<"a"<<str<<endl;
        }
        else
        {
            for (int i = 0; i < n-2; i++)
            {
                cin >> str;
                res+=
                if(i == 0)res+=str;
                else if(res[(i*2)-1] == str[0])res+= str[1];
                else res+= str;

            }

            cout<<res<<endl;
        }

    }

}
