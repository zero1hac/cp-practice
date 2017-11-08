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
bool cmp(pair<int, int> a, pair<int, int> b){
  return a.first > b.first;

}
int main(){
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  int N;
  cin>>N;
  int M;
  cin>>M;
  vector<bool> pai1(N+1, false);
  vector<pair<int, int> > cargap;
  for(int i=0; i<M; i++){
    int ini;
    cin>>ini;
    int end;
    cin>>end;
    cargap.push_back({ini, end});
  }

  stable_sort(cargap.begin(), cargap.end());
  int max_s = INT_MIN;
  max_s = max(max_s, cargap[0].first - 1);
  for(int i=0; i<cargap.size(); i++){
    cout<<cargap[i].first<<" "<<cargap[i].second<<endl;
    max_s = max(max_s, cargap[i+1].first - cargap[i].second -1);
  }
  max_s = max(max_s, N - cargap[M-1].second);
  cout<<"max gap: "<<max_s<<endl;


  return 0;
}
