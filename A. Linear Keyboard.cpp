#include <bits/stdc++.h>
using namespace std;

int main()
{
    int tc;
    cin >> tc;
    while(tc--)
    {
        string s1,s2;
        cin >> s1;
        cin >> s2;
        int s1length = s1.size();

        int arr[256] = {0};
        for (int i = 0; i < s1length; i++){
            arr[s1[i]] = i + 1;
        }
        int res = 0;
        for (int i = 1; i < s2.size(); i++){
            res += abs(arr[s2[i]] - arr[s2[i - 1]]);
        }
        cout<<res<<endl;
    }

}
