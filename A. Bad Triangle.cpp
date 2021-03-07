#include <bits/stdc++.h>
using namespace std;


int main()
{
    int tc;

    cin >> tc;
    while(tc--)
    {
        int n;
        cin >> n;
        long long int triangle[n+6];
        for(int i=0; i<n; i++)
        {
            cin >> triangle[i];
        }
        int flag = 0;
        for(int i=0; i<n-1; i++)
        {
            if(triangle[n-1] >= triangle[i] + triangle[i+1])
                {
                    cout<<i+1<<" "<<i+2<<" "<<n<<endl;
                    flag = 1;
                    break;

                }
        }
        if(flag == 0 )cout<<-1<<endl;

    }

}
