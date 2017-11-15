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

string change_base(string &s, int b1, int b2){
  bool sign = (s.front() == '-');
  int x=0;
  for(size_t i = (sign ? 1: 0); i<s.length(); i++){
    x = x*b1 + (isdigit(s[i]) ? s[i] - '0':s[i] - 'A' + 10);
  }
  string result = "";
  do{
    int dig = x%b2;
    result += (dig >= 10 ? 'A' + dig - 10: '0' + dig);
    x/=b2;
  }while(x);

  if(sign)result+='-';
  reverse(result.begin(), result.end());
  return result;
}
int main(){
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  string s;
  cin>>s;
  int b1,b2;
  cin>>b1;
  cin>>b2;
  cout<<change_base(s, b1, b2)<<endl;

  return 0;
}
