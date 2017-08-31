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
  int N;
  cin>>N;
  //cout<<"ch\n";
  //cout<<N;
  vi brackets;
  for(int i = 0; i<N; i++) {
      int x;
      cin>>x;
      brackets.pb(x);
    }

  int max_depth = INT_MIN;
  int total_inside = INT_MIN;
  int depth = 0;
  int nums = 0;
  int curr_inside = 0;
  int depth_pos = 0;
  int inside = 0;
  for(int i=0; i<N; i++){
    if(brackets[i] == 1){
      depth++;
      curr_inside++;
      if(max_depth < depth){
        max_depth = depth;
        depth_pos = i+1;
      }
      //max_depth = max(max_depth, depth);
    }
    if(brackets[i] == 2){
      curr_inside++;
      depth--;
    }
    if(depth == 0){
      if(curr_inside > total_inside){
        total_inside = curr_inside;
        inside = i - total_inside + 2;
      }
      total_inside = max(total_inside, curr_inside-2);
      curr_inside = 0;
    }
  }

  cout<<max_depth<<" "<<depth_pos<<" "<<total_inside<<" "<<inside<<endl;

  return 0;
}
