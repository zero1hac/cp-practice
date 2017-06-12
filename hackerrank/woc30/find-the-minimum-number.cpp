#include <bits/stdc++.h>
using namespace std;

string return_string(vector<int> v){
  if(v.size() == 2){
    return "min(int, int)";
  }
  else {
    v.pop_back();
    return string("min(int, ") + return_string(v) + string(")");
  }
}

int main(){
  int n;
  cin>>n;
  vector<int> v(n);
  // for(int i=1; i<=n; i++){
  //   v.push_back(1);
  // }
  cout<<return_string(v);
  return 0;
}
