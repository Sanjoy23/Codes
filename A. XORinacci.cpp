#include <bits/stdc++.h>

using namespace std;

#define MOD 1000000007;




int main()
{

    int t;
    long long int a,b,n,d;
    scanf("%d",&t);
    while(t--){

        cin >> a >> b >> n;
        d = a^b;
        if(n%3 == 0)cout<<a<<endl;
        else if(n%3 == 1)cout<<b<<endl;
        else{
            cout<<d<<endl;
        }



    }
    return 0;
}
