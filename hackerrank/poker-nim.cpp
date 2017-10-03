#include <bits/stdc++.h>
using namespace std;
int dp[102];

int grundy(int s,int level){
    if(dp[s]!=-1)return dp[s];
    set<int, greater<int> > st;
    for(int i=1; i<=s; i++){
        //cout<<i<<" "<<level<<" i\n";
        int temp = grundy(s- i, level+1);
        st.insert(temp);
    }
    for(int i=0; 1; i++){
        if(st.find(i) == st.end())return dp[s] = i;
    }    
}

int main() {
    int G;
    cin>>G;
    while(G--){
        int N,k;
        cin>>N>>k;
        vector<int> S(N);
        memset(dp, -1, sizeof(dp));
        dp[0]=0;
        dp[1]=1;
        for(int i=0; i<N; i++){
            cin>>S[i];
        }
        int flag = grundy(S[0], 0);
        for(int i=1; i<N; i++){
            flag ^= grundy(S[i], 0);
        }
        
        if(flag==0){
            cout<<"Second\n";
        }
        else{
            cout<<"First\n";
        }
        
    }
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    return 0;
}

