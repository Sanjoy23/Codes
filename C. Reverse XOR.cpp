#include <bits/stdc++.h>
using namespace std;


int main()
{
    int tc;
    cin >> tc;
    int n;
    while(tc--)
    {
        cin >> n;
        string binary = bitset<32>(n).to_string();

        int i = 0, j = binary.size() - 1;

        while(i < j && binary[j] == '0') j--;
        int cnt1 = 0;
        while(i < j && binary[i] == '0') i++;
        for(int k = 0; k < binary.size(); k++)
        {
            if(binary[k] == '1') cnt1++;
        }
        int flag = true;

        for(int left = i; left <= j; left++, j--)
        {
            if(binary[left] != binary[j]) {
                    flag = false;
                    break;
            }
        }
        if(flag && cnt1 % 2 == 0)
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }
}
