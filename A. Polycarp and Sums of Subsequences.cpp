#include <bits/stdc++.h>
using namespace std;


int main()
{
    int tc;
    cin >> tc;
    while(tc--)
    {
        long long arr[10];
        long long mx = -1;
        for (int i = 0; i < 7; i++)cin >> arr[i], mx = max(mx, arr[i]);
        int flag = 0;
        for (int i = 0; i < 7 - 2; i++)
        {

            for (int j = i + 1; j < 7 - 1; j++)
            {

                for (int k = j + 1; k < 7; k++)
                {
                    if (arr[i] + arr[j] + arr[k] == mx)
                    {
                        cout << arr[i] <<" "<<arr[j]<<" "<<arr[k]<<endl;
                        flag = 1;
                        break;
                    }
                }
                if(flag)break;
            }
            if(flag) break;
        }

    }



}

