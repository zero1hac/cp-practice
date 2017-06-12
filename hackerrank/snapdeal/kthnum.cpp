#include<bits/stdc++.h>
using namespace std;
int main(){
	long long int N,Q,X,K,type;
	cin>>N>>Q;
	long long int A[N];
	while(Q--){
		cin>>X>>K>>type;
		switch(type){
			case 0: int i=0,j=1;
				while(A[i]<X)i++;
				while(j<=K && i<N){i++;j++;}
				if(i==N)cout<<"-1";
				else cout<<A[i];
			case 1:
				int i=0,j=1;
				while(A[i]>X)i++;
				i-=1;
				while(j<=K && i>=0){i--;j++;}
				if(i==-1)cout<<"-1";
				else cout<<A[i];
			}
		}

	return 0;}
