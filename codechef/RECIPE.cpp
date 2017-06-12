/*Dushyant Kumar Mishra
zeroonehacker
Mathematics and Computing
IIT BHU Varanasi
*/
#include<iostream>
#include<stdio.h>
#include<string>
#define fori(i,a,b) for(int i=a;i<b;i++)
#define ll long long int
using namespace std;
unsigned int gcd(unsigned int u,unsigned int v){
        int shift;
        if(u == 0) return v;
        if(v == 0) return u;
        shift = __builtin_ctz(u | v);
        u >>= __builtin_ctz(u);
        do{
                v >>= __builtin_ctz(v);
                if(u > v){
                        unsigned int t = v;
                        v = u;
                        u = t;
                }
                v = v-u;
                }while(v !=0);
                return u<<shift;
        }

int main(){
	int T,N,K[51],P;
	while(T--){
		cin>>N;
		P = N;
		while(N--)cin>>K[N-1];
			

return 0;}
