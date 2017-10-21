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

int M,K,N;
int dp[200][21][21];
int solve(int i, int j, int k, vector<int> v){
  if(j==M){
    // size of subset reached, so return 1 if modulo is 0 else return 0
    return k==0;
  }
  if(i==N){
    //last element of array reached and j!=M yet so return 0
    return 0;
  }
  if(dp[i][j][k]!=-1){
    //if it has already occurred return the stored value;
    return dp[i][j][k];
  }
  else{
    //states =>
    //i : at which element we are currently
    //j : how many elements have we considered till now
    //k : modulo K of the sum of elements that we have considered so far (numbers = j)
    //now compute the values for dp[i][j][k] by considering next element and by not considering
    // next element in the array 
    dp[i][j][k] = solve(i+1, j, k,v) + solve(i+1, j+1, (k+v[i])%K,v);
    return dp[i][j][k];
  }

}
int main(){
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  cin>>N;
  vector<int> v(N, 0);
  for(int i=0; i<N; i++){
    cin>>v[i];
  }
  cin>>M;
  cin>>K;
  memset(dp, -1, sizeof(dp));
  cout<<solve(0,0,0,v)<<endl;
  return 0;
}
