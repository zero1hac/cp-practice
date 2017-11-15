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

int s2i(string s){
  int result = 0 ;
  bool sign = false;
  int start = 0;
  if(s[0]=='-'){sign = true;start++;}
  if(s[0] == '+'){sign = false; start++;}
  for(int i=start; i<s.length(); i++){
    result = result*10 + (int)(s[i] - '0');
  }

  if(sign)return result*-1;
  else return result;

}


string i2s(int a){
  if(a==0)return "0";
  bool sign = false;
  if(a < 0){sign  = true;a= -1*a;}
  string result = "";
  while(a > 0){
    char dig = (a%10 + '0');
    a/=10;
    result = dig + result;
  }
  if(sign){
    return "-"+result;
  }
  else{
    return result;
  }

}
int main(){
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  string s;
  cin>>s;
  int val = s2i(s);
  cout<<val<<endl;
  string val1 = i2s(val);
  cout<<val1<<endl;
  return 0;
}
