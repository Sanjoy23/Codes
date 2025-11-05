#include <bits/stdc++.h>
using namespace std;
int main()
{
    // your code goes here
    int tc;
    cin >> tc;
    int n;
    while(tc--)
    {
        cin >> n;
        int arr[n + 5];
        int mx = -1;
        for(int i = 1; i <= n; i++){
            cin >> arr[i];
            if(arr[i] > mx)
            {
                mx = arr[i];
            }
            else if(i % 2 == 0 && arr[i] < mx)
            {
                arr[i] = mx;
            }
        }
        int cnt = 0;
        for(int i = 1; i < n; i++)
        {
            if(i % 2 == 1)
            {
                ///cout << "IN: " << i << endl;
                if(arr[i] >= arr[i + 1])
                {
                    int d = arr[i + 1] - arr[i] + 1;
                    arr[i] -= d;
                    cnt += d;
                }
                if(arr[i] >= arr[i - 1] && i != 1)
                {
                    int d = arr[i] - arr[i - 1] + 1;
                    arr[i] -= d;
                    cnt += d;
                }
                ///cout << "cnt: " << cnt << endl;
            }
        }
        if(n % 2 == 1 && arr[n] >= arr[n - 1])
        {
            cnt += arr[n] - arr[n - 1] + 1;
            arr[n]-= arr[n] - arr[n - 1] + 1;
        }
        cout << cnt << endl;
    }
}
