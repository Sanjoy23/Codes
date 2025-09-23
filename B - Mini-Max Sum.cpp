#include <bits/stdc++.h>
using namespace std;

int main()
{
    long long arr[10];
    long long sum = 0;
    long long maxSum = 0, minSum = LLONG_MAX;
    for(int i = 0; i < 5; i++)
    {
        cin >> arr[i];
        sum += arr[i];
    }
    for(int i = 0; i < 5; i++)
    {
        if(sum - arr[i] > maxSum) maxSum = sum - arr[i];
        if(sum - arr[i] < minSum)
        {
            minSum = sum - arr[i];
        }
    }

    cout << minSum << " " << maxSum << endl;
}
