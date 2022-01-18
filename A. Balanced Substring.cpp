#include <bits/stdc++.h>
using namespace std;

int main()
{
    int tc;
    string s;
    cin >> tc;
    while(tc--)
    {
        int len;
        cin >> len;
        cin >> s;
        int resulta = 0, resultb = 0;
        int counta = 0, countb = 0;
        int i, j;
        for( i=0; i<len; i++)
        {
            for(j = i; j<len; j++)
            {
                if(s[j] == 'a')counta++;
                else countb++;

                if(counta == countb)
                {
                    resulta = i+1;
                    resultb = j+1;
                }

            }
            if(counta == countb)
            {
                resulta = i+1;
                resultb = j+1;
            }
        }
        cout<<resulta<<' '<<resultb<<endl;


    }

}
