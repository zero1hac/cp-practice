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

int knapsack(int W, vector<int> wt, vector<int> val){
  int dp[val.size()+1][W+1];

  for(int i=0; i<=val.size(); i++){
    for(int w=0; w<=W; w++){
      if(i==0 || w==0){
        dp[i][w] = 0;
      }
      else if(wt[i-1] < w){
        dp[i][w] = max(dp[i-1][w], dp[i-1][w-wt[i-1]]+val[i-1]);
      }
      else{
        dp[i][w] = dp[i-1][w];
      }
    }
  }
  return dp[val.size()][W];
}
int main(){
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  int T;
  cin>>T;
  while(T--){
    int K, M;
    cin>>K>>M;
    vector<int> val(M,0);
    vector<int> wt(M,0);
    for(int i=0; i<M; i++){
      cin>>wt[i];
      cin>>val[i];
    }
    int k = knapsack(K, wt, val);
    cout<<"Hey stupid robber, you can get "<<k<<"."<<endl;
  }

  return 0;
}
