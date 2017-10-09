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
int N, C;
std::vector<int> v;
bool check(int space){
  int prev = v[0];
  int temp_count=1;
  for(int i=1; i<v.size(); i++){
    if(v[i] - prev >= space){
      temp_count++;
      if(temp_count==C){
        return true;
      }
      prev = v[i];
    }
  }
  return false;
}

int binary_search(){
  int l=0, r=v[v.size()-1];
  for(int i=0; i<N; i++){
    //cout<<v[i]<<" ";
  }
  int max1=INT_MIN;
  while(l < r){
    int mid = l + (r - l)/2;
    //cout<<"checking mid: "<<mid<<endl;
    if(check(mid)){
      if(mid > max1)max1 = mid;
      l = mid+1;
    }
    else{
      r = mid;
    }
  }
  return max1;
}

int main(){
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  int T;
  cin>>T;
  while(T--){
    v.clear();
    cin>>N>>C;
    for(int i=0; i<N; i++){
      int temp;
      cin>>temp;
      v.push_back(temp);
    }
    sort(v.begin(), v.end());
    cout<<binary_search()<<endl;

  }

  return 0;
}
