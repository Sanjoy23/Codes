#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);cout.tie(0);

    int tc;
    cin >> tc;

    while(tc--)
    {
        int n;
        cin >> n;
        string str;
        cin >> str;
        if(is_sorted(str.begin(), str.end()))
        {
            cout<<0<<endl;
        }
        else
        {
            string temp = str;
            vector<int> v;
            sort(temp.begin(), temp.end());
            for(int i = 0; i < n; i++){
                if(temp[i] != str[i]){
                    v.push_back(i+1);
                }
            }
            cout<<1<<endl;
            cout<<v.size();
            for (int i = 0;  i < v.size(); i++)cout<<" "<<v[i];
            cout<<endl;
        }
    }
}
