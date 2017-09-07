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
    int N;cin>>N;
    vii order;
    for(int i=1; i<=N; i++){
        int t,d;
        cin>>t>>d;
        order.push_back(make_pair(t+d, i));
    }
    sort(order.begin(), order.end());
    for(int i=0; i<N; i++){
        cout<<order[i].second<<" ";
    }
    

  return 0;
}

