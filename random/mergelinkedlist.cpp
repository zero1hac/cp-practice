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

struct Node{
  int data;
  Node * next;
};

Node * createNode(int x){
  Node * newNode = (Node *)malloc(sizeof(Node));
  newNode->next = NULL;
  newNode->data = x;
  return newNode;
}

void addNode(Node * root, int data){
  while(root->next!= NULL){
    root = root->next;
  }
  root->next = newNode(data);
}

Node * addSortedLinkedList(Node * a, Node *b){
  if(a == NULL)return b;
  if(b == NULL)return a;

}

int main(){
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);

  return 0;
}
