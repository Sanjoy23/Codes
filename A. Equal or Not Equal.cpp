#include <bits/stdc++.h>
using namespace std;
int main()
{

    int tc;
    cin >> tc;
    while(tc--)
    {
        string str;
        cin >> str;
        int length = str.size();
        int arr[length + 6];
        arr[0] = 5;

        for(int i = 1; i < length; i++)
        {
            if(str[i-1] == 'E') arr[i] = arr[i-1];
            else if(str[i - 1] == 'N'  ) arr[i] = 6;
        }
        bool flag = true;
        for(int i = 0; i < length - 1; i++){
            if((str[i] == 'E' and arr[i] != arr[i+1]) or (str[i] == 'N' and arr[i] == arr[i+1])){
                flag = false;
                break;
            }
        }

        if(str[length - 1] == 'N' and )
    }

}
