#include <bits/stdc++.h>
using namespace std;


int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int tc;
    cin >> tc;

    while(tc--)
    {
        int n;
        cin >> n;
        int arr[2005];
        for(int i = 0; i < n; i++) cin >> arr[i];
        long long x;
        long long k;
        long long ch[25][25];
        memset(ch, 0, sizeof(ch));
        int l = ceil(log(n + 1));

        for(int i = 0; i <= l; i++)
        {
            for(int j = 0; j < n; j++)
            {
                ch[i][arr[j]]++;
            }
            for(int j = 0; j < n; j++)
            {
                arr[j] = ch[i][arr[j]];
            }


        }
        int q;
        cin >> q;

        while(q--)
        {
            cin >> x >> k;
            cout<< ch[k][x] <<endl;



        }


    }
}
