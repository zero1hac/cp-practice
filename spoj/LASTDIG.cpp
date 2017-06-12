#include<bits/stdc++.h>
using namespace std;
long long int modpow(long long int a,long long int b,long long int m){
		long long c=1,er=0;
		while(er<b){
			er++;
			c = (c*a)%m;
		}
		return c;			
}
int main(){
	long long int A,B,T;
	cin>>T;
	while(T--){
		cin>>A>>B;
		if(A==0){cout<<"0"<<endl;continue;}
		if(B==0){cout<<"1"<<endl;continue;}
		if(A>0 && B>0){
			cout<<modpow(A,B,10)<<endl;
}
}
return 0;
}
