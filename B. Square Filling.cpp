#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, m;
    int a[55][55],b[55][55]={0},c[2505], d[2505];

    cin >> n >> m;

    for (int i = 0; i<n; i++){
        for(int j = 0; j<m; j++)cin >> a[i][j];
    }

    int cnt = 0,k = 0, l = 0;
    bool flag = false;

    for (int i = 0; i<n-1; i++){
        for (int j =0; j<m-1; j++)
        {
            if(a[i][j] == 1 && a[i][j+1] == 1 && a[i+1][j] == 1 && a[i+1][j+1] == 1  ){
                cnt ++;
                b[i][j] = 1;
                b[i][j+1] = 1;
                b[i+1][j] = 1;
                b[i+1][j+1] = 1;
                c[k++] = i+1;
                d[l++] = j+1;
            }

        }

    }


    for (int i = 0; i<n; i++){
        for(int j = 0; j<m; j++){
          if (a[i][j] == b[i][j])flag = true;
            else{
                cout<<-1<<endl;
                return 0;
            }
        }
    }


    cout<<cnt<<endl;

    for( int i =0; i<cnt; i++){
        cout<<c[i]<<" "<<d[i]<<endl;
    }


}
