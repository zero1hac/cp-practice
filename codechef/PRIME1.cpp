/*Dushyant Kumar Mishra
zeroonehacker
Mathematics and Computing
IIT BHU Varanasi
*/
#include<iostream>
#include<stdio.h>
#include<cstring>
#define ll long long int
using namespace std;
void prime1(int L ,int U){
	int d = U - L +1;
	bool flag[d];
	memset(flag,true,sizeof(flag));
	for(int i = L%2;i<d;i+=2)flag[i] = false;
	for(int i=3;i<d;i+=2){
		
		int mod = L %i;
		int t;
		if(mod>0)t=i-mod;
		else t=mod;
		if( L/i == 0 || L/i == 1)t+=i;
		for(int j=t;j<d;j+=i)flag[j]=false;
	}
	if(L<=1) flag[1-L]=false;
	if(L <=2) printf("2\n");
	for(int i=L%2?0:1;i<d;i+=2) if(flag[i] == true ) printf("%d\n",L+i);
	}
		
int main(){
	int T,m,n;
	cin>>T;
	while(T--){
		cin>>m>>n;
		prime1(m,n);
	}

return 0;}
