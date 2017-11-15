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

void convert(string &s){
  size_t count_a = 0;
  size_t ind = 0;
  for(int i=0; i<s.length(); i++){
    if(s[i]!='b'){
      s[ind++] = s[i];
    }
    if(s[i]=='a')count_a++;
  }
  s.resize(count_a + ind);
  size_t curr_ind = ind - 1;
  size_t szt = s.length() - 1;
  int write_ind = szt;
  for(int i=curr_ind; i>=0; i--){
    if(s[i] == 'a'){
      s[write_ind--] = 'd';
      s[write_ind--] = 'd';
    }
    else{
      s[write_ind--] = s[i];
    }
  }
}
int main(){
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  string s;
  cin>>s;
  convert(s);
  cout<<s<<endl;
  return 0;
}
