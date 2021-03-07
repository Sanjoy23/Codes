#include <bits/stdc++.h>
using namespace std;

int main()
{
   string str;
   cin >> str;

   int len = str.size();
   int cnt=0,mx=-1,leftindex,rightindex,k;

   for ( int i =0; i<len; i++)
   {
       if(str[i]<=str[i+1])
       {
           if(cnt == 0)k=i;
        cnt++;
       }

       else{
        if(cnt > mx)mx=cnt,leftindex = k,rightindex=i;
        cnt=0;

       }
   }

   for(int i=leftindex; i<=rightindex; i++)cout<<str[i];
   cout<<endl;

   cout<<mx<<endl;

}
