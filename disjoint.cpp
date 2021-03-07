#include <bits/stdc++.h>
using namespace std;

int par[200005];

void setparent()
{
    for(int i=0; i<=1000+5; i++)par[i]=i;
}



int  Find(int x)
{
    if(par[x] == x) return x;
    return par[x] = Find(par[x]);
}

void Union(int x, int y)
{
    int setx = Find(x);
    int sety = Find(y);

    if(setx != sety)
    {
        par[sety] = setx;
    }

    cout<<"after: "<<par[x]<<" "<<par[y]<<endl;
}





int main(){

    setparent();

int u,v;
for (int i =0; i<11; i++){

    cin >> u >> v;
    cout<<"previous parent: "<<par[u]<<" "<<par[v]<<endl;
    if(Find(par[u]) != Find(par[v])){

        Union(u,v);
    }

}

}
