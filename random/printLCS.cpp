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

void printLCS(string s1, string s2){
  int arr[s1.length()+1][s2.length()+1];
  int m = s1.length();
  int n = s2.length();
  for(int i=0; i<=m; i++){
    for(int j=0; j<=n; j++){
      if(i==0 || j==0){
        arr[i][j]=0;
      }
      else if(s1[i-1] == s2[j-1]){
        arr[i][j] = arr[i-1][j-1]+1;
      }
      else{
        arr[i][j] = max(arr[i-1][j], arr[i][j-1]);
      }
    }
  }
  string s3;
  int i=m, j=n;
  while(i>0 && j>0){
    if(s1[i-1] == s2[j-1]){
      s3 += s1[i-1];
      i--;j--;
    }
    else if(arr[i-1][j] > arr[i][j-1]){
      i--;
    }
    else{
      j--;
    }
  }
  reverse(s3.begin(), s3.end());
  cout<<s3;
}
int main(){
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  string s1;
  string s2;
  cin>>s1;
  cin>>s2;
  printLCS(s1, s2);
  return 0;
}
