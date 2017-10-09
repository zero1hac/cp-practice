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
std::vector<string> v;
char table[10][5] = {"", "", "abc", "def", "ghi", "jkl", "mno", "pqrs", "tuv", "wxyz"};
void generate_sq(vector<int> &num_arr, string so_far, int curr_digit, int N){
  if(curr_digit == N){
    v.push_back(so_far);
    return;
  }
  for(int i=0; i<strlen(table[num_arr[curr_digit]]); i++){
    string new_s = so_far + table[num_arr[curr_digit]][i];
    generate_sq(num_arr, new_s, curr_digit+1, N);
  }

}
int main(){
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  int N;
  cin>>N;
  std::vector<int> vnum;
  for(int i=0; i<N; i++){
    int temp;
    cin>>temp;
    vnum.push_back(temp);
  }
  generate_sq(vnum, "", 0, N);
  for(int i=0; i<v.size(); i++){
    cout<<v[i]<<" ";
  }

  return 0;
}
