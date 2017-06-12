#include<iostream>
#include<math.h>
#include<cstdio>
#define gc getchar_unlocked
#include<stdio.h>
using namespace std;
void scanint(long long int &x)
{
    register long long int c = gc();
    x = 0;
    for(;(c<48 || c>57);c = gc());
    for(;c>47 && c<58;c = gc()) {x = (x<<1) + (x<<3) + c - 48;}
}
int main(){
	long long int n;
	int i,k;
	long long int T;
	scanint(T);
	while(T--){
		scanint(n);
		if(n<5)printf("0\n");
		else{
			i=1;
			k=0;
			while(n/((long long)pow(5,(double)i)) >=1){
				k+=(long long)(n/((long long)pow(5,(double)i)));
				i++;
				}
			printf("%d\n",k);
		}
	}
	return 0;
}
