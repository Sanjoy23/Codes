#include <bits/stdc++.h>
using namespace std;


int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int n, q;
    cin >> n >> q;
    string str;
    cin >> str;
    int len = str.size();
    int cnt = 0;
    for(int i = 0; i < len - 2; i++)
    {
        if(str[i] == 'a' && str[i+1] == 'b' && str[i+2] == 'c')cnt++;
    }
    while(q--)
    {
        int pos;
        char c;
        cin >> pos >> c;

        for(int i = pos - 3; i < pos + 2; i++)
        {
            if(str[i] == 'a' && str[i+1] == 'b' && str[i+2] == 'c')cnt--;
        }
        str[pos - 1] = c;
        for(int i = pos - 3; i < pos + 2; i++)
        {
            if(str[i] == 'a' && str[i+1] == 'b' && str[i+2] == 'c')cnt++;
        }


        cout<< cnt <<endl;


    }
}
