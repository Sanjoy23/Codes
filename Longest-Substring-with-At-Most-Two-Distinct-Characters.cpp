#include <bits/stdc++.h>
using namespace std;

int main(int argc, char const *argv[])
{
    string str;
    cin >> str;
    int len = str.size();
    int left = 0, right = 0;
    int result = 0;
    map<char, int> isExist;

    for ( right = 0; right < len; right++)
    {
        /* code */
        isExist[str[right]]++;
        while (isExist[str[right]] > 2)
        {
            isExist[str[right]]--;
            if(isExist[str[right]] == 0)
            {
                isExist.erase(str[right]);
            }
            left++;
        }
        
        result = max(result, right - left + 1);
        
    }
    cout<< result << endl;
    return 0;
}