#include<bits/stdc++.h>
using namespace std;

class Node{
    public:
        int max_val;
        unordered_map<int, Node*> child;
        Node(){
            max_val=0;
        }
};

class Trie{
    public:
        Node * root;
        Trie(){
            root =new  Node;
        }
        void insert(string s, int val){
            Node *temp = root;
            for(int i=0; i<s.length(); i++){
                auto it = temp->child.find(s[i]);
                if(it!=temp->child.end()){
                    temp = it->second;
                }
                else{
                    Node *newNode  = new Node;
                    temp->child.insert(make_pair(s[i], newNode));
                    temp = newNode;
                }
                temp->max_val = max(temp->max_val, val);
            }
        }

        void search(string s){
            Node *temp = root;
            for(int i=0; i<s.length(); i++){
                auto it = temp->child.find(s[i]);
                if(it!=temp->child.end()){
                    temp = it->second;
                }
                else{
                    cout<<"-1"<<endl;
                    return;
                }
            }
            cout<<temp->max_val<<endl;
        }
};

int main(){
    int n,q,t;
    cin>>n>>q;
    Trie root;
    while(n--){
        string s;
        int k;
        cin>>s>>k;
        root.insert(s, k);
    }
    while(q--){
        string s;
        cin>>s;
        root.search(s);
    }
    return 0;
}


