#include <bits/stdc++.h>
using namespace std;

int main()
{
    string str;
    cin >> str;
    int len = str.size();
     string strReverse(len, ' ');

    for(int i = len - 1; i >= 0; i--)
    {
        if(str[i] >= 'A' && str[i] <= 'Z') str[i] = str[i] + 32;
        else str[i] -= 32;
        strReverse[i] = str[i];
    }

    cout << strReverse << endl;
}
