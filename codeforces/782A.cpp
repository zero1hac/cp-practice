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
  int N;
  cin>>N;
  int count=0, max_on=0;
  for(int i=1; i<=2*N; i++){
    int p;
    cin>>p;
    if(arr[p]){
      count--;
      max_on = max(max_on, count);
      arr[p]=0;
    }
    else{
      count++;
      max_on = max(max_on, count);
      arr[p]=1;
    }
    }
    cout<<max_on<<endl;

  return 0;
}
