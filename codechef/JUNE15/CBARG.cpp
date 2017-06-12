/*Dushyant Kumar Mishra
zeroonehacker
Mathematics and Computing
IIT BHU Varanasi
*/
#include<iostream>
#include<stdio.h>
#include<string>
#include<cstdio>
#define fori(i,a,b) for(int i=a;i<b;i++)
#define ll long long int
#define gc getchar_unlocked
using namespace std;
void scanint(int &x)
{
    register int c = gc();
    x = 0;
    for(;(c<48 || c>57);c = gc());
    for(;c>47 && c<58;c = gc()) {x = (x<<1) + (x<<3) + c - 48;}
}
void scanintl(ll &x)
{
    register ll c = gc();
    x = 0;
    for(;(c<48 || c>57);c = gc());
    for(;c>47 && c<58;c = gc()) {x = (x<<1) + (x<<3) + c - 48;}
}
int main(){
	int T,N;
	ll sum=0,allo=0,num;
	scanint(T);
	fori(i,0,T){
		sum=0;
		allo=0;
		scanint(N);
		fori(j,0,N){
			scanintl(num);
			if(num>allo){
				sum+=num-allo;
				allo+=num-allo;
				}
			else{
				allo-=allo-num;
			}
		}
		printf("%lld\n",sum);
	}
	return 0;
	}
