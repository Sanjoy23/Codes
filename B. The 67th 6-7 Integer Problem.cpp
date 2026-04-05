#include <bits/stdc++.h>
using namespace std;

int main()
{
    int tc;
    cin >> tc;
    while(tc--)
    {
        int nums[9];
        int sum = 0;
        for(int i = 0; i < 7; i++){
           cin >> nums[i];
        }

        sort(nums, nums + 7);
        for(int i = 0; i < 6; i++) sum += nums[i];
        sum -= nums[6];
        sum *= -1;
        cout << sum << endl;
    }
}
