#include<bits/stdc++.h>
#include <stdio.h>
using namespace std;

struct Graph{
int V;
int E;
int Adj[10][10];
};

struct Graph *adjMatrix(){
int i,u,v;
struct Graph*G = (struct Graph*)malloc(sizeof(struct Graph));

if(!G){
cout<<"Memory Error"<<endl;
return NULL;
}

scanf("%d %d",&G->V,&G->E);
//G->Adj = (int**)malloc(G->V*G->V*sizeof(int));
//cin>>G->V>>G->E;

for(u=0;u<G->V;u++)
    for(v=0;v<G->V;v++)
        G->Adj[u][v] = 0;

for(i=0;i<G->E;i++){
    cin>>u >>v ;
    G->Adj[u][v]=1;
    G->Adj[v][u]=1;
}
return G;
}
int main()
{
    struct Graph *G=adjMatrix();
    cout<<G->Adj[0][0]<< endl;
    return 0;
}
