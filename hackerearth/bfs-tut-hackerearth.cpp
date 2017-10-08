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

int arr[100005];
bool visited[100005];
void bfs(std::vector<std::vector<int> > g){
  int start=1;
  queue<int> q;
  q.push(start);
  arr[start]=1;
  visited[start]=true;
  while(!q.empty()){
    int front1 = q.front();
    q.pop();
    for(int i=0; i<g[front1].size(); i++){
      if(!visited[g[front1][i]]){
        q.push(g[front1][i]);
        visited[g[front1][i]] = true;
        arr[g[front1][i]] = arr[front1]+1;
      }
    }
  }
}
int main(){
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  int N;
  cin>>N;
  std::vector<std::vector<int> > v(N+1);
  for(int i=0; i<N-1; i++){
    int v1,v2;
    cin>>v1>>v2;
    v[v1].push_back(v2);
    v[v2].push_back(v1);

  }
  bfs(v);
  int x;
  cin>>x;
  int count = 0;
  for(int i=1; i<=N; i++){
    if(x==arr[i])count++;
  }
cout<<count;
  return 0;
}
