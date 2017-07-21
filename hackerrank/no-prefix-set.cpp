#include<bits/stdc++.h>
using namespace std;

class Node{
    public:
        bool isEndOfWord;
        unordered_map<int, Node*> child;
        Node(){
            isEndOfWord=false;
        }
};

class Trie{
    public:
        Node * root;
        Trie(){
            root =new  Node;
        }
        int insert(string s){
            Node *temp = root;
            for(int i=0; i<s.length(); i++){
                auto it = temp->child.find(s[i]);
                if(it!=temp->child.end()){
                    temp = it->second;
                    if(temp->isEndOfWord){
                        cout<<"BAD SET"<<endl;
                        cout<<s;
                        return 0;
                    }
                }
                else{
                    Node *newNode  = new Node;
                    temp->child.insert(make_pair(s[i], newNode));
                    temp = newNode;
                }
                
            }
            if(temp->child.size()>=1){
                cout<<"BAD SET"<<endl;
                cout<<s;
                return 0;
            }
            temp->isEndOfWord = true;
            return 1;
        }

        int search(string s){
            Node *temp = root;
            for(int i=0; i<s.length(); i++){
                auto it = temp->child.find(s[i]);
                if(it!=temp->child.end()){
                    temp = it->second;
                }
                else{
                    return 0;
                }
            }
            if(temp->isEndOfWord)return 1;
            else return 0; 
        }
};

int main(){
    int n,q,t;
    cin>>n;
    Trie root;
    q=1;
    string s1;
    while(n--){
        cin>>s1;
        if(q){
        q = root.insert(s1);
    }
        
    }
    if(q){
        cout<<"GOOD SET";
    }
    return 0;
}



