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
  int arr[100];
  int arr1[20];
  for(int i=0; i<5; i++)cin>>arr[i];
  for(int i=0; i<3; i++)cin>>arr1[i];
  int indA = 4;
  int indB = 2;
  int fin= 7;
  while(indB >=0){
    if(arr1[indB] <= arr[indA]){
      arr[fin] = arr[indA];
      indA--;
      fin--;
    }
    else{
      arr[fin] = arr1[indB];
      indB--;
      fin--;
    }
  }

  for(int i=0; i<8; i++){
    cout<<arr[i]<<" ";
  }
  return 0;
}
