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

int closestDown(Node * down){
  if(down == NULL){
    return INT_MAX;
  }
  if(down->left == NULL && down->right == NULL){
    return 0;
  }
  return 1 + min(closestDown(down->left), closestDown(down->right));
}

int findClosestUtil(Node * root, int k, Node * ancestors[], int curr_ind){
  if(root == NULL){
    return INT_MAX;
  }
  if(root->data == k){
    int down = closestDown(root);

    for(int i=curr_ind-1; i>=0; i--){
      down = min(down, curr_ind - i + closestDown(ancestors[i]));
    }
    return down;
  }
  ancestors[curr_ind] = root;
  return min(findClosestUtil(root->left, k, ancestors, curr_ind+1), findClosestUtil(root->right, k, ancestors, curr_ind+1));
}


int findClosest(Node * root,int k){
  Node * ancestors[100];
  return findClosestUtil(root, k, ancestors, 0);
}
int main(){
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);

  Node *root = newNode(1);
  root->left               = newNode(5);
    root->right              = newNode(7);
    root->right->left        = newNode(13);
    root->right->right       = newNode(15);
    root->right->left->left  = newNode(19);
    root->right->left->left->left  = newNode(16);
    root->right->left->left->right = newNode(20);
    root->right->right->right      = newNode(25);
    root->right->right->right->left = newNode(30);

cout<<"Closest leaf from key "<<13<<" is : "<<findClosest(root, 13)<<endl;

  return 0;
}
