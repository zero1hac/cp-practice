#include<iostream>
#include<cstdio>
#define CON 1000000007
using namespace std;
int main(){
	int T;scanf("%d",&T);
	while(T--){
	long long int N,x,M;
	scanf("%lld%lld%lld",&N,&x,&M);
	long long int arr[N];
	for(long long int i=0; i<N;i++){
		scanf("%lld",&arr[i]);
	}
	if(N==1)printf("%lld\n",arr[0]%(CON));
	else {if(x==1)printf("%lld\n",arr[0]%(CON));
		else{
			if(M>1000000)printf("%lld\n",(arr[1]+arr[0]*M)%(CON));
			else{
				for(long long int i=0;i<M;i++){
					for(long long int j =1;j<x;j++){
						arr[j] = arr[j] + arr[j-1];
					}
				}
			printf("%lld\n",arr[x-1]%CON);

}
}
}
}return 0;}
