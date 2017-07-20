#include<bits/stdc++.h>
using namespace std;

class Node{
    public:
        int num;
        unordered_map<int, Node*> child;
        Node(){
            num=0;
        }
};

class Trie{
    public:
        Node * root;
        Trie(){
            root =new  Node;
        }
        void insert(string s){
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
                temp->num++;
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
                    cout<<"0"<<endl;
                    return;
                }
            }
            cout<<temp->num<<endl;
        }
};

int main(){
    int n,q,t;
    cin>>n;
    Trie root;
    while(n--){
        string s1;
        string s2;
        cin>>s1>>s2;
        if(s1 == "add"){
            root.insert(s2);
        }
        else if(s1 == "find"){
            root.search(s2);
        }
    }
    return 0;
}


