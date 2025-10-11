#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, m;
    cin >> n >> m;
    int students[m + 5];
    for(int i = 0; i < m; i++) cin >> students[i];
    sort(students, students + m);
    int ans = 10000;
    for(int i = 0; i < m - n + 1; i++)
    {
        //cout << students[i + n -1] << " " << students[i] << endl;
        ans = min(ans, abs(students[i + n - 1] - students[i]));
    }
    cout << ans << endl;
}
