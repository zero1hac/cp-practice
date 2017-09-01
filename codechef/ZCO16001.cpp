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



int fn(std::vector<int> v1, std::vector<int> v2, int K){
  priority_queue<int> p1, p2;
  for(int i=0; i<v1.size(); i++){
    p1.push(v1[i]);
    p2.push(-v2[i]);
  }

  while(1){
    if(K==0) break;
    K--;
    if(p1.top() <= -p2.top())break;
    int a = p1.top(); p1.pop();
    int b = -p2.top(); p2.pop();
    p2.push(-a); p1.push(b);
  }
  while(p2.size() > 1){
    p2.pop();
  }
  return p1.top() - p2.top();
}
int main(){
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  int N;
  int K;
  cin>>N>>K;
  vector<int> shelf1(N);
  vector<int> shelf2(N);
  for(int i=0; i<N; i++){
    cin>>shelf1[i];
  }
  for(int i=0; i<N; i++){
    cin>>shelf2[i];
  }
  cout<<min(fn(shelf1, shelf2, K), fn(shelf2, shelf1, K));
  return 0;
}
