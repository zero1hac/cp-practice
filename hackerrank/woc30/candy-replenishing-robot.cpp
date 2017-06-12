#include <bits/stdc++.h>
using namespace std;

int main(){
  int n, t;
  cin>>n>>t;
  int c[t];
  for(int c_i = 0; c_i < t; c_i ++ ){
    cin>>c[c_i];
  }
  int curr_candy = n, added = 0;
  for(int i = 0; i < t - 1; i ++){
    curr_candy -= c[i];
    if(curr_candy < 5){
      added += n - curr_candy;
      curr_candy += n - curr_candy;
    }

  }
  cout<<added;
  return 0;
}
