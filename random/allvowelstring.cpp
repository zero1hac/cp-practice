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

bool isVowel(char s){
  return (s == 'a' || s == 'e' || s == 'i' || s == 'o' || s == 'u');
}
std::vector<string> return_v(string s){
  unordered_set<char> hash;
  std::vector<string> result;
  for(int i=0; i<s.length(); i++){
    for(int j=i; j<s.length(); j++){
      if(!isVowel(s[j]))break;
      hash.insert(s[j]);
      if(hash.size() == 5){
        result.pb(s.substr(i, j-i+1));
      }
    }
    hash.clear();
  }

  return result;
}

int main(){
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  string S;
  cin>>S;
  std::vector<string> v = return_v(S);
  for(int i=0; i<v.size(); i++){
    cout<<v[i]<<" ";
  }
  return 0;
}
