#include<bits/stdc++.h>
using namespace std;
int main(){
	int T;
	cin>>T;
	while(T--){
		string S;
		cin>>S;
		int k=S.size();
		//cout<<k;

		for(int i=k-1;i>=0;i--){
			cout<<S[i];
			}
		cout<<endl;	
		}
	return 0;
	}
