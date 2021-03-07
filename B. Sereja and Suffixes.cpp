#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n,m,li;
    cin >> n >> m;
    int a[n+5],dp[n+4],a2[100000+5]={0};
    set<int> s;
    for(int i=0; i<n; i++)cin >> a[i],a2[a[i]]++;

    for(int i=n-1; i>=0; i--)
    {
        dp[n-2]=a
    }

    for(int i=0; i<m; i++)
    {
        cin >> li;
        for(int j=li-1; j<n; j++)
        {
            s.insert(a[j]);

        }
        cout<<s.size()<<endl;
        s.clear();
    }

}
