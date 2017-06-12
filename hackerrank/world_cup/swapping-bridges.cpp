#include<iostream>
#include <list>
#include<cstdio>
#define gc getchar_unlocked
using namespace std;
void scanint(int &x)
{
    register int c = gc();
    x = 0;
    for(;(c<48 || c>57);c = gc());
    for(;c>47 && c<58;c = gc()) {x = (x<<1) + (x<<3) + c - 48;}
}

class Graph
{
    int V;
    list<int> *adj;
    void DFSUtil(int v, bool visited[]);
public:
    Graph(int V);
    void addEdge(int v, int w);
    int DFS();
};
Graph::Graph(int V)
{
    this->V = V;
    adj = new list<int>[V];
}
void Graph::addEdge(int v, int w)
{
    adj[v].push_back(w);
}
void Graph::DFSUtil(int v, bool visited[])
{
    visited[v] = true;
    //cout << v << " ";
    list<int>::iterator i;
    for(i = adj[v].begin(); i != adj[v].end(); ++i)
        if(!visited[*i])
            DFSUtil(*i, visited);
}
int Graph::DFS()
{
    bool *visited = new bool[V];
    for(int i = 0; i < V; i++)
        visited[i] = false;
        int i=0,count1=0;
    while(i<V){
            if(visited[i]==false){
            DFSUtil(i,visited);
            count1++;}
            i++;
            }
    return count1;
}
int main()
{
    int T,N,i,x;
    scanint(T);
    while(T--){
        scanint(N);
        Graph g(N);
        for(i=0;i<N;i++){
            scanint(x);
            g.addEdge(i,x-1);
            }
        x = g.DFS();
        cout<<x-1<<endl;}
    return 0;
}
