#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int n,m;
        cin >> n;
        m = n/2;
        int sum = 0;
        int sum2 = 0;
        //cout<<pow(2,3)<<endl;
        if(n>2)
        {
            for(int i=n-1; i>=m; i--)
            {
                sum+=pow(2,i);
            }
            for(int i=1; i<m; i++)
            {
                sum2+=pow(2,i);
            }
            sum2 += pow(2,n);
            cout<<abs(sum2-sum)<<endl;
        }
        else if(n==2)
        {
            cout<<abs(pow(2,1)-pow(2,2))<<endl;
        }

    }


}
