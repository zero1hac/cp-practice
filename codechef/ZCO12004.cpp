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

int main(){
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  int N;
  cin>>N;
  std::vector<int> costs(N, 0);
  for(int i=0; i<N; i++){
    cin>>costs[i];
  }
  // case 1 : when first element is included compilsorily but last may or may not be
  std::vector<int> dp1(N,0);
  std::vector<int> dp2(N,0);
  int res1;
  int res2;
  int result;

  dp1[0] = costs[0];
  dp1[1] = costs[0] + costs[1];
  dp1[2] = costs[0] + costs[2];
  for(int i=3; i<N; i++){
    dp1[i] = costs[i] + min(dp1[i-1], dp1[i-2]);
  }

  res1 = min(dp1[N-1], dp1[N-2]);

  dp2[0] = costs[0];
  dp2[1] = costs[1];
  for(int i=2; i<N; i++){
    dp2[i] = costs[i] + min(dp2[i-1], dp2[i-2]);
  }
  res2 = dp2[N-1];
  cout<<min(res1, res2);

  return 0;
}
