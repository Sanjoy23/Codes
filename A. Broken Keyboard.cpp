#include <bits/stdc++.h>
using namespace std;
set<char> st;

int main()
{

    int t;
    cin >> t;
    while(t--)
    {
        string str;
        cin >> str;
        char res[5005];
        char check[5005];
        if( str.size() == 1)
        {
            cout<<str<<endl;
        }
        else
        {
            int cnt = 0,k =0,i;
            for( i=1; i<str.size();)
            {
                if(str[i] == str[i-1])
                {
                    cnt++, i+= 1,cout<<cnt<<endl;
                }
                else
                {
                    if(cnt&1)
                    {
                        st.insert(str[i]);
                        cout<<str[i]<<endl;
                        cnt = 1;
                        i++;
                    }
                    else
                    {
                        cnt = 0;
                        i++;

                    }
                }
            }

            if(cnt & 1)st.insert(str[i-1]);

            if(k == 0)
            {
                cout<<endl;
            }
            else
            {
                for(auto u : st) cout << u;
            }






        }
    }
}




