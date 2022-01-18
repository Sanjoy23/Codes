#include <bits/stdc++.h>
using namespace std;

int main() {
    char s1,s2;
    cin >> s1 >> s2;
    s1 = tolower(s1);
    s2 = tolower(s2);
    if(s1 == s2)cout<<0<<endl;
    else if(s1 < s2) cout<<-1<<endl;
    else cout<<1<<endl;

}
