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

int main(){
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  long long N;
  long long K;
  cin>>N>>K;
  std::vector<long long>  arr(N);
  for(long long  i=0; i<N; i++){
    cin>>arr[i];
  }
  long long m;
  sort(arr.begin(), arr.end());
  long long count=0;
  for(long long i=0; i<N-1; i++){
    long long r = N, l=i;
    for(; (r - l)>1; ){
      m = (r + l)>>1;
      if(arr[m] - arr[i] >= K)r = m;
      else l=m;
    }
    count+=(N-r);
  }

  cout<<count;
  return 0;
}
