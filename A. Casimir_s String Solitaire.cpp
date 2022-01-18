#include <bits/stdc++.h>
using namespace std;


int main()
{
    int t;
    cin >> t;

    string str;


    while(t--)
    {
        cin >> str;

        int cntA = 0,  cntB =0,  cntC = 0;

        int len = str.size();

        for(int i=0; i<len; i++)
        {
            if(str[i] == 'A')cntA++;
            else if(str[i] == 'B')cntB++;
            else if(str[i] == 'C')cntC++;
        }

        cntB-=cntA;
        cntB-=cntC;

        if(cntB != 0)cout<<"NO"<<endl;
        else{
            cout<<"YES"<<endl;
        }
    }


}
