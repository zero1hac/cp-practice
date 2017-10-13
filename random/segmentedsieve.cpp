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

#define TRACE
#ifdef TRACE
#define trace(...) __f(#__VA_ARGS__, __VA_ARGS__)
template <typename Arg1>
void __f(const char* name, Arg1&& arg1){
    cerr << name << " : " << arg1 << std::endl;
}
template <typename Arg1, typename... Args>
void __f(const char* names, Arg1&& arg1, Args&&... args){
    const char* comma = strchr(names + 1, ',');cerr.write(names, comma - names) << " : " << arg1<<" | ";__f(comma+1, args...);
}
#else
#define trace(...)
#endif
void simpleSieve(int N, vector<int> &primes){
  vector<bool> mark(N+1, true);
  for(int i=2; i*i<N; i++){
    if(mark[i]==true){
      for(int j=i; j*j<N; j+=i){
        mark[j] = false;
      }
    }
  }

  for(int i=2; i<N; i++){
    if(mark[i]){
      cout<<i<<" ";
      primes.push_back(i);
    }
  }

}

void segmentedSieve(int N){
  std::vector<int> primes;
  int segment = floor(sqrt(N))+1;
  int low = segment;
  int high = 2*segment;
  //cout<<"segment : "<<segment;
  simpleSieve(segment, primes);

  while(low < N){
    bool mark[segment+1];
    memset(mark, true, sizeof(mark));

    for(int i=0; i<primes.size(); i++){
      int lowel = floor(low / primes[i]) * primes[i];
      while(lowel < low){
        lowel += primes[i];
      }

      for(int j=lowel; j<high; j+=primes[i]){
        mark[j - low] = false;
      }

    }
    //cout<<high<<" high "<<low<<" low\n";
    for(int i=low; i<high; i++){
      if(mark[i-low])cout<<i<<" ";
    }
    low = low+segment;
    high = high + segment;
    if(high >= N)high = N;
  }
}
int main(){
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  int N;
  cin>>N;
  segmentedSieve(N);

  return 0;
}
