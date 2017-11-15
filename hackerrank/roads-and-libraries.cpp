#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#define ll long long
using namespace std;

vector<vector<ll> > graph(100005);
ll depth;
bool visited[100005];

void dfs(ll x){
    depth++;
    visited[x] = true;

    for(ll i=0; i<graph[x].size(); i++){
        if(!visited[graph[x][i]]){
            dfs(graph[x][i]);
        }
    }
}

void initialize(ll n){
    for(ll i=0; i<=n; i++){
        graph[i].clear();
        visited[i] = false;
    }
}
int main() {
    ll q;
    cin>>q;
    while(q--){
        ll n,m,clib,croad;
        cin>>n>>m>>clib>>croad;
        initialize(n);
        for(ll i=0; i<m; i++){
            ll u,v;
            cin>>u>>v;
            graph[u].push_back(v);
            graph[v].push_back(u);
        }
        ll result=0;
        for(ll i=1; i<=n; i++){
            if(!visited[i]){
                depth=0;
                dfs(i);
                //cout<<depth<<endl;
                result+=min(clib + (croad)*(depth-1), depth*clib);
            }

        }
        cout<<result<<endl;


    }
    /* Enter your code here. Read input from STDIN. Prll output to STDOUT */
    return 0;
}
