#include <bits/stdc++.h>
using namespace std;


int main()
{
    unsigned long long n;
    cin >> n;
    unsigned long long k = n,m=0;
    while(k){
        k=k/10;
        m++;
    }
    unsigned long long result = m*(n+1);
    unsigned long long check = 1;
    while(m--){
        result -= check;
        check *= 10;
    }
    cout<<result<<endl;

}
