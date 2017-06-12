#include<bits/stdc++.h>
using namespace std;
int main(){	
	int T;
	cin>>T;
	while(T--){
		string S,ans;
		cin>>S;
		ans = "";
		ans+=S[0];
		for(int i=1;i<S.size();i++){
			if(S[i]!=S[i-1])ans+=S[i];
			}
		cout<<ans<<endl;
	}
	return 0;
}
