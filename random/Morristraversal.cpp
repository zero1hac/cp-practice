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

Node * newNode(int x){
  Node * newN = new Node;
  newN->data = x;
  newN->left == NULL;
  newN->right == NULL;
}

int returnKthsmallest(Node * root, int k){
  int kthsmallest = INT_MIN;
  Node * curr = root;
  int count = 0;
  while(curr!= NULL){
    if(curr->left == NULL){
      count++;

      if(count == k){
        kthsmallest = curr->data;
      }
      curr = curr->right;
    }
    else{
      Node * pre = curr->left;
      while(pre->right!= NULL && pre->right != curr){
        pre = pre->right;
      }

      if(pre->right == NULL){
        pre->right = curr;
        curr = curr->left;
      }
      else{
        count++;
        pre->right = NULL;

        if(count == k)kthsmallest = curr->data;
        curr = curr->right;
      }
    }
  }
  return kthsmallest;
}
int main(){
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);

  Node * root = newNode(50);
  root->left = newNode(30);
  root->right = newNode(70);
  root->left->left = newNode(20);
  root->left->right = newNode(40);
  root->right->left = newNode(60);
  root->right->right = newNode(80);
  cout<<returnKthsmallest(root, 4)<<endl;
  cout<<returnKthsmallest(root, 2)<<endl;
  cout<<returnKthsmallest(root, 5)<<endl;
  cout<<returnKthsmallest(root, 7)<<endl;

  return 0;
}
