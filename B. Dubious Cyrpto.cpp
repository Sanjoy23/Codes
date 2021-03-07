#include <bits/stdc++.h>
using namespace std;


int main(){

    int tc;
    scanf("%d",&tc);
    while(tc--){
        int l,r, a, b,c;
        long long int m;
        scanf("%d %d %lld",&l, &r, &m);
        int na, mid;
        while(r >= l ){
            mid = (l+r)/2;

            na = m - b+c;
            if(na > 0 and na % 2 == 0){
                break;
            }

            if(na < l ){
                l = mid;
            }else{
                r = mid;
            }


        }

        cout<<na<<endl;
    }

}
