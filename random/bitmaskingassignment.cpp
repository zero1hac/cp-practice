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
#define MAXN 1000000
int solve(N, vector<vector<int> > cost){
  int states = pow(2, N);
  std::vector<int> v(states);
  for(int i=0; i<states; i++){
    v[i] = MAXN;
  }

  v[0]=0;
  for(int mask=0; mask<states; mask++){
    int count_bit = __builtin_popcount(mask);
    for(int j=0; j<N; j++){
      if(!(mask & (1<<j))){
        v[mask|(1<<j)] = min(dp[mask|(1<<j)], dp[mask]+cost[count_bit][j]);
      }
    }

  }
  return v[states-1];
}

int main(){
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  int N;
  cin>>N;
  int M;
  cin>>M;
  vector<vector<int> > vec(N, vector<int>(M,0));
  for(int i=0; i<N; i++){
    for(int j=0; j<M; j++)
    cin>>vec[i][j];
  }
  cout<<solve(N, vec);

  return 0;
}
bit
