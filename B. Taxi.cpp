#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int grp[n + 5];
    int cnt1 = 0, cnt2 = 0, cnt3 = 0, cnt4 = 0;

    for(int i = 0; i < n; i++)
    {
        cin >> grp[i];
        if(grp[i] == 1) cnt1++;
        else if(grp[i] == 2) cnt2++;
        else if(grp[i] == 3) cnt3++;
        else cnt4++;
    }
    int ans = 0;
    ans = cnt4;
    int pair31 = min(cnt1, cnt3);
    ans += pair31;
    cnt1 -= pair31;
    cnt3 -= pair31;

    ans += cnt3;

    ans += cnt2 / 2;
    cnt2 = cnt2 % 2;


    int total = cnt1 + cnt2 * 2;

    if(total % 4 == 0) ans += total / 4;
    else
    {
        ans += total / 4 + 1;
    }
    cout << ans << endl;

}
