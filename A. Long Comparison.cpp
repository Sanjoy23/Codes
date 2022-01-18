
#include <bits/stdc++.h>
using namespace std;


int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int tc;
    cin >> tc;
    while(tc--)
    {
        long long x1, x2, p1, p2;
        cin >> x1 >> p1;
        cin >> x2 >> p2;

        long long mn = min(p1, p2);
        p1 = p1 - mn;
        p2 = p2 - mn;

        if(p1 >= 7)cout<< ">"<<endl;
        else if(p2 >= 7)cout<< "<"<<endl;
        else
        {
            long long ans1 = x1 * pow(10, p1);
            long long ans2 = x2 * pow(10, p2);
            ///cout<<ans1<<" "<<ans2<<endl;
            if(ans1 > ans2)cout<< ">"<<endl;
            else if(ans1 < ans2)cout<< "<" <<endl;
            else cout<<'='<<endl;
        }


    }
}
