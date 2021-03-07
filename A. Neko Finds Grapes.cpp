#include <bits/stdc++.h>
using namespace std;

int main(){

    int n, m;

    cin >> n >> m;
    map<int, int> mp1;
    map<int, int> mp2;

    int  chest[n+4],keys[m+6];
    for(int i=0; i<n; i++)cin >> chest[i],mp1[chest[i]]=0;
    for(int j=0; j<m; j++) cin >> keys[j],mp2[keys[j]]=0;
    sort(chest, chest+n, greater<int>());
    int cnt=0;

    for(int i=0 ;i<n; i++)
    {
        for(int j=0; j<m; j++)
        {
            if(mp1[chest[i]]==0 && mp2[keys[j]]==0){
                if((chest[i]+keys[j])%2 ==1){
                    cnt++;
                    //cout<<cnt<<endl;

                    mp1[chest[i]]=1;
                    mp2[keys[j]]=1;

                    break;
                }
            }

        }
    }



    cout<<cnt<<endl;
}
