#include <bits/stdc++.h>
using namespace std;

struct abc
{
    int a,b;
};

int main()
{
    int n;
    cin >> n;
    struct abc temp[n+5];
    int cnt =0, mx = -1;
    for(int i=0; i<n; i++)cin >> temp[i].a >> temp[i].b;
    for(int i=1; i<n; i++)
    {
        if(temp[i].a == temp[i-1].a && temp[i].b == temp[i-1].b)cnt++;
        else
        {
            mx = max(mx, cnt);
            cnt = 0;
        }
    }

    cout<<max(mx, cnt)+1<<endl;

}
