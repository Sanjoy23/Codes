#include <bits/stdc++.h>
using namespace std;

#define ll long long

int main()
{
    ll n,k;
    cin >> n >> k;

    ll fi,ti;

    ll ans=-2000000000,temp;

    for(int i=0; i<n; i++)
    {
        cin >> fi >> ti;
        temp=fi;
        if(ti>k){
            temp = temp-(ti-k);

        }
       ans=max(ans,temp);

    }
    cout<<ans<<endl;
}
