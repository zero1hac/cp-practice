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

void initialize(int n, int size[]){
    for(int i=1; i<=n; i++){
        arr[i] = i;
        size[i] = 1;
    }
}

int root(int A){
    while(arr[A] != A){
        A = arr[arr[A]];
        A = arr[A];
    }
    return A;
}

void union1(int size[], int A, int B){
    int rootA = root(A);
    int rootB = root(B);

    if(rootA == rootB)return;
    else if(size[rootA] < size[rootB]){
        arr[rootA] = arr[rootB];
        size[rootB]+=size[rootA];
        size[rootA]=0;
    }
    else{
        arr[rootB] = arr[rootA];
        size[rootA]+=size[rootB];
        size[rootB]=0;
    }
}

bool find(int A, int B){
    if(root(A) == root(B))return true;
    else false;
}

void printA(int sz[], int n){
    int a[n+1];
    a[0]=0;
    for(int i=1; i<=n; i++){
        a[i] = sz[i];
    }

    sort(a, a+n+1);
    for(int i=1; i<=n; i++){
        if(a[i]!=0){
            cout<<a[i]<<" ";
        }
    }
    cout<<endl;
}

int main()
{
    int n, m;
    cin>>n>>m;
    int sz[n+1];
    initialize(n, sz);
    while(m--){
        int a, b;
        cin>>a>>b;
        union1(sz, a, b);
        printA(sz, n);
    }

    return 0;
}

int main(){
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);

  return 0;
}
