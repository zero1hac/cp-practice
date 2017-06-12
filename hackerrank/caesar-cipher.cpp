#include<iostream>
#include<cstdio>
#include<string>
using namespace std;
int main(){
	string S;
	int N,K;
	cin>>N;
	cin>>S;
	cin>>K;
	for(int i=0;i<N;i++){
		if((S[i] <= 'z' && S[i] >= 'a')){S[i]= 97 + (S[i]-97+K)%26;}  if(S[i] >= 'A' && S[i] <= 'Z'){ S[i] = 65 + (S[i] -65 + K)%26;} 
		}
	cout<<S;
	return 0;
	}
