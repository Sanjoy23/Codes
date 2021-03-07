#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;

    string str;
    cin >> str;

    int a=100,c=100,t=100,g=100,cntA=0,cntC=0,cntT=0,cntG=0,ans=10000,K=0;

    for(int i=0; i<=n-4; i++)
    {

        cntA=min(abs(str[i]-'A'), 26-abs(str[i]-'A'));
        cntC=min(abs(str[i+1]-'C'), 26-abs(str[i+1]-'C'));
        cntT=min(abs(str[i+2]-'T'), 26-abs(str[i+2]-'T'));
        cntG=min(abs(str[i+3]-'G'), 26-abs(str[i+3]-'G'));



        K = cntA+cntT+cntC+cntG;
        ans=min(K,ans);

    }
    cout<<ans<<endl;
}
