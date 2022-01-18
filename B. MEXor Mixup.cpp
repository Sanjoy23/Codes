#include <bits/stdc++.h>
using namespace std;

int main()
{
    int tc;
    int a, b;
    cin >> tc;

    while(tc--)
    {
        cin >> a >> b;

        int check = 0;
        /*for(int i=0; i<a; i++)
        {
            check = check ^ i;
        }*/

        int x = a -1;

        if(x%4 == 0)check = x;
        if(x%4 == 1)check = 1;
        if(x%4 == 2)check = x+1;



        if(check == b)cout<<a<<endl;
        else
        {

            check = check ^ b;
            if(check != a)cout<<a+1<<endl;
            else
            {
                cout<<a+2<<endl;
            }
        }


    }
}
