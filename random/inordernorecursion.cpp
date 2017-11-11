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
  Node * left, *right;
};

void inorder1(Node * root){
  if(root == NULL)return;
  Node * current = root;
  stack<Node *> st;
  bool finished = 0;
  while(!finished){
    if(current!= NULL){
      st.push(current);
      current = current->left;
    }
    else{
      if(!st.empty()){
        Node * val_node = st.top();
        st.pop();

        cout<<val_node->data<<" ";
        current = val_node->right;
      }
      else{
        finished=1;
      }
    }
  }
}

Node * newNode(int val){
  Node * temp = (Node *)malloc(sizeof(Node ));
  temp->data = val;
  temp->left = NULL;
  temp->right = NULL;
  return temp;
}
int main(){
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);


  Node * root = newNode(1);
  root->left = newNode(2);
  root->right = newNode(3);
  root->left->left = newNode(4);
  root->left->right = newNode(5);
  inorder1(root);
  return 0;
}
