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

long long int dp[200010][4];
std::vector<long long int> arr;
int N;

long long int rec(int ind, int rest){
  if(rest >= 3){
    return INT_MAX;
  }
  else if(ind >= N){
    return 0;
  }
  else if(dp[ind][rest] != -1){
    return dp[ind][rest];
  }
  else{
    dp[ind][rest] = min(arr[ind] + rec(ind+1, 0), rec(ind+1, rest+1));
    return dp[ind][rest];
  }
}
int main(){
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  cin>>N;
  arr.resize(N);
  for(int i=0; i<N; i++){
    cin>>arr[i];
  }

  memset(dp, -1, sizeof(dp));
  cout<<rec(0,0)<<endl;

  return 0;
}
