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

int modulo(int a, string b){
  int mod=0;
  for(int i=0; i<b.length(); i++){
    mod = (mod*10 + b[i] - '0')%a;
  }
  return mod;
}
int main(){
  ios_base::sync_with_stdio(false);
  //cin.tie(NULL);

  string a, b;
  cout<<"Enter  A: \n";
  cin>>a;
  cout<<"Enter  B: \n";
  cin>>b;
  if(a.length()==1 && b.length()==1 && a[0]=='0' && b[0]=='0'){
    cout<<"1"; return 0;
  }
  if(a.length()==1 && a[0]==0){
    cout<<"0"; return 0;
  }
  if(b.length() == 1 && b[0]==0){
    cout<<"1"; return 1;
  }
  int eex = modulo(4, b)==0 ? 4:modulo(4,b);

  int result = pow(a[a.length()-1] - '0', eex);
  cout<<result%10;

  return 0;
}
