#include<bits/stdc++.h>
using namespace std;
template <typename T>
T modpow(T base, T exp, T modulusi) {
  base %= modulusi;
  T result = 1;
  while (exp > 0) {
    if (exp & 1) result = (result * base) % modulusi;
    base = (base * base) % modulusi;
    exp >>= 1;
  }
  return result;
}
int main(){
    int T;
    cin>>T;
    while(T--){
        long long N,ways=1,k,M=1000000007;
        cin>>N;
        if(N%2==0){
            k = N/2;
            ways = 3 * modpow(2ll,k,M)-2;}
            else{
            k  = (N+1)/2;
            ways = modpow(2ll,k+1,M)-2;}
        ways = (ways+M)%M;
        printf("%lld\n",ways);
        }
        }
