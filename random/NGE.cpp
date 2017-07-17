#include <bits/stdc++.h>
using namespace std;

int main(){
    vector<int> vec;
    int n,x;
    cin>>n;
    for(int i=0; i<n;i++){
        cin>>x;
        vec.push_back(x);
    }
    stack<int>st;
    int next;
    st.push(vec[0]);
    for(int i=1; i<n; i++){
        next = vec[i];
        while(!st.empty() && (st.top() < next)){
            cout<<st.top()<<" "<<next<<endl;
            st.pop();
        }
        st.push(next);

    }
    while(!st.empty()){
        cout<<st.top()<<" -1\n";
        st.pop();
    }
    return 0;
}
