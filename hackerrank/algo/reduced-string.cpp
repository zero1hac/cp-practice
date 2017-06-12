#include <bits/stdc++.h>
#define rep(i,n) for(int i=0;i<n;i++)
#define ll long long int
#define pi pair<ll,ll>
#define mod 1000000007
#define pb push_back
using namespace std;

int main(){
  string S;
  cin >> S;
  std::vector<char> v;
  rep(i,S.length()){
    if ( v.size() == 0 || S[i]!=v.back()) v.pb(S[i]);
    else v.pop_back();
  }
  if(v.size() == 0) cout<<"Empty String";
  else{
    for(auto i=v.begin(); i!=v.end(); i++) cout<<*i;
  }
  return 0;
}
