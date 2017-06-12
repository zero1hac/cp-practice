/*Dushyant Kumar Mishra
zeroonehacker
Mathematics and Computing
IIT BHU Varanasi
*/
#include<iostream>
#include<stdio.h>
#include<string>
using namespace std;
long long int fact(int n){
		long long int facto=1;
		for(int i=n;i>1;i--)	facto *=i;
		return facto;
}
int main(){
	int T,n;
	scanf("%d",&T);
	while(T--){
		scanf("%d",&n);
		printf("%lld\n",fact(n));
	}

return 0;}

