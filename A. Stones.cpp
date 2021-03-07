#include <bits/stdc++.h>
using namespace std;

int main()
{

    int t;
    cin >> t;
    while(t--)
    {

        int a, b, c;
        cin >> a >> b >> c;
        if (b == 0)
        {
            cout<<0<<endl;
        }
        ///else if(a ==0 && b == 0)
        else
        {
            int cnt =0;

            while(b != 0 && c >= 2)
            {
                cnt += 1;
                b = b - 1;
                cnt += 2;
                c -= 2;
            }


            while(a != 0 && b >= 2)
            {
                cnt += 1;
                a = a - 1;
                cnt += 2;
                b -= 2;
            }


            cout<<cnt<<endl;

        }


    }


}
