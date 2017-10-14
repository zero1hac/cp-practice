#include <bits/stdc++.h>
using namespace std;
int arr[100005];

void init(int N){
    for(int i=1; i<=N; i++){
        arr[i] = i;
    }
}

int root1(int x){

    while(arr[x] != x){
        x = arr[arr[x]];
    }

    return x;
}

void union1(int x, int y){
    int par_x = root1(x);
    int par_y = root1(y);
    arr[par_y] = par_x;
}

int kruskal(multiset<pair<int, pair<int, int> > > s){
    int cumsum = 0;
    while(!s.empty()){
        auto t = *s.begin();
        s.erase(s.begin());
        int wt = t.first;
        int x = t.second.first;
        int y = t.second.second;
        if(root1(x) != root1(y)){
            cumsum+=wt;
            union1(x,y);
        }
    }
    return cumsum;

}
int main()
{
    int N, M;
    cin>>N>>M;
    vector<vector<pair<int, int> > > graph(N+1);
    multiset<pair<int, pair<int, int> > > s;
    for(int i=0; i<M; i++){
        int u,v,w;
        cin>>u>>v>>w;
        s.insert({w, {u, v}});
        //graph[u].push_back({v,w});
        //graph[v].push_back({u,w});
    }
    init(N);
    cout<<kruskal(s);
    //cout << "Hello World!" << endl;
    return 0;
}
