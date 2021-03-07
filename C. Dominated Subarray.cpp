#include <bits/stdc++.h>
using namespace std;


int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int n, arr[254321];
        int check[223456]= {0};

        cin >> n;
        for(int i=0; i<n; i++)
        {
            cin >> arr[i];
            check[arr[i]]++;
        }
        int cnt = 0,temp=234567;
        for(int i=1; i<n; i++)
        {
            if(check[i]>=2)cnt++,temp=max(check[i],temp);
        }

        if(cnt == 0)cout<<-1<<endl;
        else
        {
            if(cnt == 1)cout<<n<<endl;
            else if(temp == n)cout<<2<<endl;
            else
            {
                cout<<temp<<endl;
            }

        }
    }

}
