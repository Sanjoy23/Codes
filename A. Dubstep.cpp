#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s1, s2;
    s2="";
    cin >> s1;
    int n = s1.size();
    int flag = 0;
    for(int i=0; i < n;)
    {
        if(s1[i] == 'W' && s1[i+1] == 'U' && s1[i+2] == 'B')i += 3, flag = 0;
        else
        {
            s2 += s1[i];
            i++;
            flag = 1;
        }
        if(!flag && !s2.empty())  s2+=" ";

    }

    cout<<s2<<endl;


    return 0;
}
