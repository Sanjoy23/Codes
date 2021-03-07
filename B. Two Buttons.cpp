
#include <bits/stdc++.h>
using namespace std;

vector <long long int> vec[654321];
long long int vis[654321];

int main()
{
    int n, m;
    cin >> n >> m;

    queue <int> q;
    q.push(n);
    int cnt = 0, temp = 0;

    int t = 40000;
    while(!q.empty() && t--)
    {
        temp = q.front();
        q.pop();
        if(temp>=0)vec[temp].push_back(temp-1);
        if(temp<=m)vec[temp].push_back(temp*2);

        for(int i=0; i<vec[temp].size(); i++)
        {
            if(vis[vec[temp][i]] == 0){
            vis[vec[temp][i]] = vis[temp]+1;
            q.push(vec[temp][i]);
            if(temp == m){
                cout << vis[m] << endl;
                return 0;
            }
            }
        }

    }


    ///cout << cnt << endl;

    return 0;

}
