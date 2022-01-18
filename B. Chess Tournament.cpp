#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int tc;
    cin >> tc;
    while(tc--)
    {
        int n;
        cin >> n;
        string str;
        cin >> str;
        char ans[n+5][n+5];
        if( n <= 2)cout<<"NO"<<endl;
        else
        {
            cout<<"YES"<<endl;
            for(int i = 0; i < n; i++)
            {
                int flag = 0;
                for(int j = 0; j < n; j++)
                {
                    if(i == j)ans[i][j] = 'X';
                    else if(str[i] == '1' and str[j] == '1')ans[i][j] = '=';
                    else if(str[i] == '1')ans[i][j] = '+';
                    else if(str[j] == '1')ans[i][j] = '-';
                    else if(str[i] == '2' && str[j] == '2' && flag == 0)ans[i][j] = '+', flag = 1;
                    else ans[i][j] = '-';
                }
            }
            for(int i = 0; i < n; i++)
            {
                for(int j = 0; j < n; j++)
                {
                    cout<<ans[i][j];
                }
                cout<<endl;

            }
        }
    }
}
