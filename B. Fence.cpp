#include <bits/stdc++.h>
using namespace std;

int main()
{
    int tc;
    int n, k;

    cin >> n >> k;
    int planks[n + 5];
    for(int i = 0; i < n; i++) cin >> planks[i];
    int sum = 0, idx;
    for(int i = 0; i < k; i++) sum += planks[i];
    idx = 0;
    int mnnn = sum;

    for(int i = k; i < n; i++)
    {
        sum -= planks[i - k];
        sum += planks[i];
        if(sum < mnnn)
        {
            idx = i - k + 1;
            mnnn = sum;
        }
    }
    cout << idx + 1 << endl;

}
