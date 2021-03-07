#include <bits/stdc++.h>
using namespace std;


int main()
{
    int n,m,a[110],b[111];
    bool arr[1000] ={false};

    cin >> n;
    for (int i=0; i<n; i++)cin >> a[i], arr[a[i]]= true;

    cin >> m;
    for(int i=0; i<m; i++)cin >> b[i], arr[b[i]]= true;

    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            int temp = a[i]+b[j];
            if(!arr[temp]){

                cout<<a[i]<<" "<<b[j]<<endl;
                return 0;
            }

        }
    }


}
