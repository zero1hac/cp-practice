#include<bits/stdc++.h>
using namespace std;
#define sz(a) int((a).size())
#define pb push_back
#define all(c) (c).begin(),(c).end()
#define tr(c,i) for(auto i = (c).begin(); i != (c).end(); i++)
#define present(c,x) ((c).find(x) != (c).end())
#define cpresent(c,x) (find(all(c),x) != (c).end())
typedef vector<int> vi;
typedef pair<int, int> ii;
typedef vector<ii> vii;
typedef vector<vi> vvi;
typedef vector<vii> vvii;


int main(){
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  map<string, int> oc;
  int T;cin>>T;
  //cout<<"check";
  while(T--){
  string S;
  cin>>S;
  map<string, int>::iterator it = oc.find(S);
  if(it != oc.end()){
    cout<<S<<oc[S]+1<<endl;
    oc[S]++;
  }
  else{
    oc[S]=0;
    cout<<"OK"<<endl;
  }
  }

  return 0;
}
