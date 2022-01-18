#include <bits/stdc++.h>
using namespace std;



string reverseWord(int i, int j, string str)
{

    while(i<=j)
    {
        swap(str[i], str[j]);
        i++, j--;
    }

    return str;

}



int main()
{
    string str;
    getline(cin, str);

    str = str + ' ';

    int len = str.size();
    cout<<len<<endl;
    string temp = "";
    int k = 0;
    string revString = "";

    for(int i=0; i<len; i++)
    {

        cout<<i<<endl;
        if(str[i] != ' ')
        {
            temp += str[i];

            ///cout<<temp<<endl;

        }
        else
        {

            cout<<"temp: "<<temp<<endl;
            revString += reverseWord(k, i-1, temp);
            temp = "";
            cout<<revString<<endl;

            k = i+1;
            cout<<"k: "<<k<<endl;


        }
    }

    ///cout<<reverseWord(0,len-1,revString)<<endl;



}
