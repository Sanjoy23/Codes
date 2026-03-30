#include<bits/stdc++.h>
using namespace std;

int main()
{
    /*
    #ifndef ONLINE_JUDGE
        freopen("input.txt", "r", stdin);   // read from file
        freopen("output.txt", "w", stdout); // write to file
    #endif */

    int n;
    cin>>n;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');
    for(int i = 0; i < n; i++)
    {
        string s;
        if(i == 0) getline(cin, s);
        map<string,int >mp;
        map<string,int >::iterator it;
        int cnt=0;
        while(getline(cin,s))
        {
            if(s.empty())break;
            cnt++;
            mp[s]++;

        }
        for(it=mp.begin(); it!=mp.end(); it++)
        {
            double d=(it->second/(cnt*1.0))*100.0;
            cout<<it->first<<" ";
            printf("%.4lf\n",d);
        }
        if(i != n-1)cout<<endl;

    }
    return 0;
}
