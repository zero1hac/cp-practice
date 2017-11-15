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


vector<vector<int> > generateMatrix(int A) {
    vector<vector<int> > mat(A, vector<int>(A, 0));
    int di=0,dj=1,i=0,j=0;
    //cout<<"x";
    for(int x=0; x<A*A; x++){
      //cout<<i<<" :i"<<j<<" :j"<<endl;
        mat[i][j] = x+1;
        if(mat[(i+di+A)%A][(j+dj+A)%A]){
            int temp = di;
            di = dj;
            dj = -1*temp;
        }
        i+=di;
        j+=dj;
    }
    return mat;
}

int main(){
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  int num;
  cin>>num;
  vector<vector<int> > result;
  result = generateMatrix(num);
  for(int i=0; i<num; i++){
    for(int j=0; j<num; j++){
      cout<<result[i][j]<<" ";
    }
    cout<<endl;
  }
  return 0;
}
