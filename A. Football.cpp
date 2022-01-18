#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int cnt1 = 0;
    int cnt2 = 0;
    string str = "", team1 = "", team2 = "";
    long long arr[2] = {0};

    cin >> str;
    team1 = str;
    cnt1++;
    n--;
    while(n--)
    {
        cin >> str;
        if(str == team1){
            cnt1++;
        }else{
            team2 = str;
            cnt2++;
        }

    }
    if(cnt1 > cnt2)cout<<team1<<endl;
    else cout<<team2<<endl;


}
