/*Dushyant Kumar Mishra
zeroonehacker
Mathematics and Computing
IIT BHU Varanasi
*/
using namespace std;
#include<iostream>
#include<cstdio>
int main(){
	int T,sum,A,N,K;
	cin>>T;
	while(T--){
		cin>>N>>K;
		for(int i=0;i<N;i++){
			cin>>A;
			if(A<=0)sum++;
			}
		if(sum<K)printf("YES\n");
		else printf("NO\n");
		}
	return 0;
	}
