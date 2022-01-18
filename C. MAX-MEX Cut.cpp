#include <bits/stdc++.h>
using namespace std;

int main()
{
    int tc;

    cin >> tc;

    string str1, str2;
    int n;

    while(tc--)
    {
        cin >> n;
        cin >> str1 >> str2;

        int cnt = 0;

        if(n==1)
        {
            if(str1[0] != str2[0])cout<<2<<endl;
            else if(str1[0] == '0' and str2[0] == '0')cout<<1<<endl;
            else if(str1[0] == '1' and str2[0] == '1')cout<<0<<endl;
        }else if(n ==2){
             if(str1[0]!= str1[1] and str1[0] == str2[0] and str1[1] == str2[1])cout<<2<<endl;;
             else if(str1[0]!=str2[0] and str1[1]!=str2[1])cout<<4<<endl;
             else if(str1[0] == '0' and str2[0] == '0' and str1[1] == '0' and str2[1] == '0')cout<<2<<endl;
             else if(str1[0] == '0' and str2[0] == '0' and str1[1] == '1' and str2[1] == '0')cout<<2<<endl;
        }
        else
        {
            for(int i=0; i<n-1; i++)
            {
                if(str1[i] != str2[i])cnt+=2;
                else if(str1[i]!= str1[i+1] and str1[i] == str2[i] and str1[i+1] == str2[i+1])cnt+=2,i++;
                else if(str1[i] == '0' and str2[i] == '0')cnt+=1;

            }

            if(str1[n-1] != str2[n-1])cnt+=2;
            else if(str1[n-1] == str2[n-1] and str1[n-1] == '0')cnt+=1;

            cout<<cnt<<endl;

        }


    }

}
