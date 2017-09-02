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

int N, C;
long long arr[100005];
bool check(long long K){
  long long prev = arr[0];
  int count=1;
  for(int i=1; i<N; i++){
    if((arr[i] - prev) >= K){
      count++;
      prev = arr[i];
    }
  }
  if(count >= C){
    return true;
  }
  return false;
}

int main(){
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  int T;
  cin>>T;
  while(T--){
    cin>>N>>C;
    long long ans=0;
    for(int i=0; i<N; i++){
      cin>>arr[i];
    }
    sort(arr, arr+N);
    long long low = 0, high = 10000000;
    while(low<=high){
      long long mid = low + (high - low)/2;
      if(check(mid)){
        low=mid+1;
        ans=mid;
      }
      else{
        high=mid-1;
      }
    }
    cout<<ans<<endl;
  }
  return 0;
}
