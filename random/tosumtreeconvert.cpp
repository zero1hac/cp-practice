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

void printInorder(Node * root){
  if(root == NULL)return;
  printInorder(root->left);
  cout<<root->data<<" ";
  printInorder(root->right);
}

int toSumtree(Node * root){
  if(root==NULL)return 0;
  int old_val = root->data;

  root->data = toSumtree(root->left) + toSumtree(root->right);
  return root->data + old_val;
}
int main(){
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  Node * root = newNode(10);
  root->left = newNode(-2);
  root->right = newNode(6);
  root->left->left = newNode(8);
  root->left->right = newNode(-4);
  root->right->left = newNode(7);
  root->right->right = newNode(5);

  toSumtree(root);

  printInorder(root);

  return 0;
}
