#include <bits/stdc++.h>
using namespace std;

void dijkstra(vector<vector<pair<int, int> > > graph, int source){
    vector<int> distances(graph.size(), INT_MAX);
    multiset<pair<int, int> > Q;
    Q.insert({0,source});
    distances[source] = 0;
    vector<bool> visited(graph.size(), false);
    //visited[source] = true;
    while(!Q.empty()){
        pair<int, int> p = *Q.begin();
        Q.erase(Q.begin());
        int u = p.second;
        int d = p.first;
        //cout<<u<<" "<<d<<endl;
        if(visited[u])continue;
        visited[u] = true;
        for(int i=0; i<graph[u].size(); i++){
            int e = graph[u][i].first, dist = graph[u][i].second;
            if(distances[u]+dist < distances[e]){
                distances[e] = distances[u] + dist;
                Q.insert({distances[e], e});
                
            }
        }
    }
    //cout<<"graphsize: "<<graph.size();
    for(int i=1; i<graph.size(); i++){
        if(i!=source){
            if(distances[i]==INT_MAX){
                cout<<"-1 ";
                
            }
            else
            cout<<distances[i]<<" ";
        }
    }
}

int main() {
    int T;
    cin>>T;
    while(T--){
        int N,M;
        cin>>N>>M;
        vector<vector<pair<int, int> > > graph(N+1);
        for(int i=0; i<M; i++){
            int x1,y1,r;
            cin>>x1>>y1>>r;
            graph[x1].push_back({y1, r});
            graph[y1].push_back({x1, r});
        }
        int S;
        cin>>S;
        dijkstra(graph, S);
        cout<<endl;
    }
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    return 0;
}

