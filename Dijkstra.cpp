#include <bits/stdc++.h>
using namespace std;

vector <pair<int,int> > g[10000];

int d[100000]={1e9};
int par[100000];

void dijkstra(int u){
    priority_queue<pair<int, int>, vector<pair<int,int> >  >pq;

    pq.push(make_pair(u,0));
    d[u]=0;

    while(!pq.empty()){
        int temp = pq.top().first;
        pq.pop();

        vector< pair<int,int> > :: iterator it;

        for (it = g[temp].begin(); it!=g[temp].end(); it++){
            int chd = (*it).first;
            int weight = (*it).second;

            if(d[temp]+weight <d[chd]){
                d[chd] = d[temp]+weight;
                pq.push(make_pair(chd, d[chd]));
            }
        }
    }



}

int main(){

int vertices, edges;
cin >> vertices >> edges;

int u,v, w;

for(int i=0; i<edges; i++){
    cin >> u >> v >> w;

    g[u].push_back(make_pair(v,w));
}

dijkstra(1);
vector< pair<int,int> > :: iterator it;

for(int i=1; i<=vertices; i++){
    for(it = g[i].begin(); it!=g[i].end(); it++){
        cout<<(*it).second<<endl;
    }
}


}
