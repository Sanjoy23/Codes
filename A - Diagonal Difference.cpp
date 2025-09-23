#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, m;
    cin >> n;

    int mat[n + 5][ n + 5];
    int leftDialog = 0;
    int rightDialog = 0;
    for(int i = 0; i < n; i++)
        for(int j = 0; j < n; j++) cin >> mat[i][j];

    for(int i = 0; i < n; i++)
        leftDialog += mat[i][i];

    ///cout << leftDialog << endl;

    for(int i = n - 1, j = 0; i >= 0; i--)
    {
        rightDialog += mat[i][j++];
    }

    cout << abs(rightDialog - leftDialog) << endl;

}
