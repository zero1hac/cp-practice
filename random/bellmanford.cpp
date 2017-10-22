#include<bits/stdc++.h>
using namespace std;
#define sz(a) int((a).size())
#define pb push_back
#define all(c) (c).begin(),(c).end()
#define tr(c,i) for(auto i = (c).begin(); i != (c).end(); i++)
#define present(c,x) ((c).find(x) != (c).end())
#define cpresent(c,x) (find(all(c),x) != (c).end())
#define ll long long
typedef vector<int> vi;
typedef pair<int, int> ii;
typedef vector<ii> vii;
typedef vector<vi> vvi;
typedef vector<vii> vvii;

#define TRACE
#ifdef TRACE
#define trace(...) __f(#__VA_ARGS__, __VA_ARGS__)
template <typename Arg1>
void __f(const char* name, Arg1&& arg1){
    cerr << name << " : " << arg1 << std::endl;
}
template <typename Arg1, typename... Args>
void __f(const char* names, Arg1&& arg1, Args&&... args){
    const char* comma = strchr(names + 1, ',');cerr.write(names, comma - names) << " : " << arg1<<" | ";__f(comma+1, args...);
}
#else
#define trace(...)
#endif

int dist[1000005];
vector<vector<int> > edges;

void initialize(int N, int M){
  edges.clear();
  edges.resize(M+1);
  for(int i=0; i<N; i++){
    dist[i] = INT_MAX;

  }
}
int main(){
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);

  int N;
  cin>>N;
  int M;
  cin>>M;
  initialize(N, M);
  for(int i=0; i<M; i++){
    int x,y,d;
    cin>>x>>y>>d;
    edges[i].pb(x);
    edges[i].pb(y);
    edges[i].pb(d);
  }

  dist[0]=0;
  for(int i=0; i<N-1; i++){
    int j=0;
    while(edges[j].size()!=0){
      if(dist[edges[j][0]] + edges[j][2] < dist[edges[j][1]]){
        dist[edges[j][1]] = dist[edges[j][0]] + edges[j][2];
      }
      j++;
    }
  }

  cout<<"Distances";
  for(int i=0; i<N; i++){
    cout<<dist[i]<<" ";
  }

  return 0;
}
