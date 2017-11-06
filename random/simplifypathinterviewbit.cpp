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

string simplifyPath(string A) {
    stack<string> st;
    stringstream ss(A);
    string temp;
    cout<<"x\n";
    while(getline(ss, temp, '/')){
        if(temp == "" or temp == ".")continue;
        else if(temp == ".." and !st.empty()){
            //cout<<" "<<st.top()<<" popped\n";
            st.pop();
        }
        else if(temp!=".."){
            //cout<<"pushed: "<<temp;
            st.push(temp);
        }
    }

    stack<string> n;
    while(!st.empty()){
        string tmp;
        tmp = st.top();
        st.pop();
        n.push(tmp);
    }
    //cout<<"check1\n";
    string result = "";
    while(!n.empty()){
        string tmp = n.top();
        result += "/" + tmp;
        n.pop();
    }

    return result.empty()? "/":result;
}


int main(){
  //ios_base::sync_with_stdio(false);
  //cin.tie(NULL);
  //cout<<"string\n";
  string input;
  cin>>input;
  cout<<simplifyPath(input);

  return 0;
}
