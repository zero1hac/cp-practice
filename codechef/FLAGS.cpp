/*Dushyant Kumar Mishra
zeroonehacker
Mathematics and Computing
IIT BHU Varanasi
*/
#include<iostream>
#include<stdio.h>
#include<string>
#define gc getchar_unlocked

void scanint(int &x)
{
    register int c = gc();
    x = 0;
    for(;(c<48 || c>57);c = gc());
    for(;c>47 && c<58;c = gc()) {x = (x<<1) + (x<<3) + c - 48;}
}

using namespace std;
int main(){
	int T;
	int N;
	long long int sum;
	scanint(T);
	while(T--){
		scanint(N);
		sum = 0;
		sum+= N*(N-1)*(N-1)*2;
		sum+= N*(N-1)*(N-2);
		sum+= N*(N-1)*(N-2)*(N-2)*2;
		printf("%d\n",sum);
	}


return 0;}
