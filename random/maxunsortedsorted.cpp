#include<bits/stdc++.h>
using namespace std;
#define sz(a) int((a).size())
#define pb push_back
#define all(c) (c).begin(),(c).end()
#define tr(c,i) for(auto i = (c).begin(); i != (c).end(); i++)
#define fori(i,a,b) for(int i=a; i<b; i++)
#define revi(i,a,b) for(int i=a; i>=b; i--)
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
  int arr[] = {10, 12, 20, 30, 25, 40, 32, 31, 35, 50, 60};
  std::vector<int> vect(arr, arr+11);
  int s=sz(vect)-1;
  int e = 0;
  fori(i, 0, sz(vect)-1){
    if(vect[i] > vect[i+1]){
      s = i;
      break;
    }
  }
  revi(i, sz(vect)-1, 1){
    if(vect[i] < vect[i-1]){
      e = i;
      break;
    }
  }
  int maxi=INT_MIN, mini=INT_MAX;
  fori(i, s, e+1){
    maxi = max(maxi, vect[i]);
    mini = min(mini, vect[i]);
  }
  cout<<"maxi: "<<maxi<<" mini: "<<mini<<endl;
  fori(i, 0, s){
    if(vect[i] > mini){
      s = i;
      break;
    }
  }
  revi(i, sz(vect)-1, e+1){
    if(vect[i] < maxi){
      e = i;
      break;
    }
  }
  cout<<"s: "<<s<<"e: "<<e<<endl;
  fori(i, s, e+1){
    cout<<vect[i]<<" ";
  }


  return 0;
}
