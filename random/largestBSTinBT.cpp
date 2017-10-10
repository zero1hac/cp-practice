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

struct Node {
  int data;
  Node * left, * right;
};

Node * newNode (int k){
  Node * temp = new Node;
  temp->data = k;
  temp->left = NULL;
  temp->right = NULL;
  return temp;
}

struct Info{
  int sz;
  int ans;
  bool isBst;
  int min1;
  int max1;
};

Info largestBST(Node * root){
  if(root==NULL){
    return {0,0,true,INT_MAX, INT_MIN};
  }
  if(root->left == NULL && root->right==NULL){
    return {1,1,true, root->data, root->data};
  }

  Info l = largestBST(root->left);
  Info r = largestBST(root->right);

  Info ret;
  ret.sz = (1 + l.sz + r.sz);

  if(l.isBst && r.isBst && l.max1 < root->data && r.min1 > root->data){
    ret.min1 = min(root->data, min(l.min1, r.min1));
    ret.max1 = max(root->data, max(l.max1, r.max1));

    ret.ans = ret.sz;
    ret.isBst = true;

    return ret;
  }

  ret.ans = max(l.ans, r.ans);
  ret.isBst = false;
  return ret;

}
int main(){
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
Node * root = newNode(60);
root->left = newNode(65);
root->right = newNode(70);
root->left->left = newNode(50);
printf("largestBST %d\n", largestBST(root).ans);

  return 0;
}
