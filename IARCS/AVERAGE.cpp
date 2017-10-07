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




bool check_average(vector<int> vec, int sum1){
  unordered_map<int, int> mp;
  for(int i=0; i<vec.size(); i++){
    if(mp.find(sum1 - vec[i]) != mp.end()){
      return true;
    }
    else{
      mp[vec[i]] = vec[i];
    }
  }
  return false;
}
int main(){
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  int N;
  cin>>N;
  std::vector<int> v(N);
  for(int i=0; i<N; i++){
    cin>>v[i];
  }
  int count=0;
  for(int i=0; i<N; i++){

    if(check_average(v, 2*v[i])){
      count++;
    }
    //trace(v[i], count);
  }
  cout<<count<<endl;
  return 0;
}
