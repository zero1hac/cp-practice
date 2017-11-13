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

void generatesubset(vector<int> &arr, int k){
  default_random_engine seed((random_device())());
  for(int i=0; i<k; i++){
    int f = uniform_int_distribution<int> {i, static_cast<int> (arr.size())-1}(seed);
    int temp = arr[i];
    arr[i] = arr[f];
    arr[f] = temp;
  }
}
int main(){
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  vector<int> arr;
  int N;
  cin>>N;
  for(int i=0; i<N; i++){
    int temp;
    cin>>temp;
    arr.push_back(temp);
  }
  int k;
  cin>>k;
  generatesubset(arr, k);
  for(int i=0; i<k; i++){
    cout<<arr[i]<<" ";
  }

  return 0;
}
