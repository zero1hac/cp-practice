#include<bits/stdc++.h>
#define gc getchar_unlocked
using namespace std;
long long int gcd (long long int num1,long long int num2) {
        return num2 ? gcd (num2, num1 % num2) : num1;
}
int main(){
	//std::ios::sync_with_stdio(false);
	long long int T,flag,istri,l;
	bool answers[5000001];
	//cout<<answers[9];
	long long int sq[2235];
	for(long long int i=1;i<=2235;i++)sq[i]=(i*i);
	for(long long int i=1;i<=2235;i++){
		for(long long int j=i+1;j<=2235;j++){if(gcd(i,j)==1 && (j-i)%2==1){l = sq[i]+sq[j];
		for(long long int k=1;k*l<=5000001;k++)answers[k*l]=true;}}
	}
			
	cin>>T;
	long long int N;
	while(T--){
		cin>>N;
		if(answers[N])printf("YES\n");
		else printf("NO\n");
	}
	//	istri = 0;
	//	i=1;
	//	long long int s,l;
	//	while(i<N){
	//		s = N*N - i*i;
	//		l = ceil(sqrt(s));//cout<<l<<" " <<floor(sqrt(s))<<endl;
	//		if(l*l == s){istri=1;break;}
	//i++;}
	//if(istri==1)printf("YES\n");
	//else printf("NO\n");
		//if(N%4==1)cout<<"YES"<<endl;
		//else{
		//if(check(N))cout<<"YES"<<endl;
		//else cout<<"NO"<<endl;}
	
return 0;
}
