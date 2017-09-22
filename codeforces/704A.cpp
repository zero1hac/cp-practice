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
bool arr[100005];

int main(){
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  int n, q;
  cin>>n>>q;
  int unread=0;
  queue<int> e[n+1];
  queue<pair<int, int> > Q;
  int i=1;
  while(q--){
    int t;
    switch(t){
      case 1: int x;cin>>x;Q.insert(make_pair(i++, x)); unread++; cout<<unread<<endl;break;
      case 2:
    }
  }

  return 0;
}
