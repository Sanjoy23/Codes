#include <bits/stdc++.h>
using namespace std;

vector <int> graph[654321];


bool vis[654321];


int bfs(int u){

    queue <int > q;
    q.push(u);

    int temp;
    int cnt = 0;
    while(!q.empty()){

        temp = q.front();
        q.pop();
        for (int i = 0; i<graph[temp].size(); i++){
            if (!vis[graph[temp][i]]){
                vis[graph[temp][i]] = 1;
                q.push(graph[temp][i]);
                cnt++;


            }

        }
        if(graph[temp].size()==0)cnt++;

    }

    return cnt;

}

int main()
{
    int n;

    cin >> n;

    int u,v;

    for (int i=0; i<n-1; i++)
    {
        cin >> u >> v;
        graph[u].push_back(v);
        //graph[v].push_back(u);

    }
    int result=0;

    printf("%d\n",bfs(0));


}
