#include <bits/stdc++.h>
using namespace std;

vector <pair<int,int> > g[123456];
int dis[123456]={1e9};
int par[123456];

void dijkstra(int u){
        priority_queue<pair<int,int>, vector<pair<int,int>> > pq;
        pq.push(make_pair(u,0));

        vector<pair<int,int> > :: iterator it;

        while(!pq.empty()){
            int temp = pq.top().first;
            for(it=g[temp].begin(); it!=g[temp].end(); it++){
                int chd=(*it).first;
                int weight=(*it).second;

                if(dis[chd]>dis[temp] + weight){
                    dis[chd] = dis[temp] + weight;
                    par[chd] = temp;
                }
            }
        }

}


int main(){
    int n,m;
    cin >> n >> m;
    int u,v,w;

    for(int i=0; i<m; i++){
        cin >> u >> v >> w;
        g[u].push_back(make_pair(v,w));
    }

    dijkstra(1);

    for(int i = n; i>0; i--){

    }



}
