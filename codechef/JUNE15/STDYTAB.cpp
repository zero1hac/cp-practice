/*Dushyant Kumar Mishra
zeroonehacker
Mathematics and Computing
IIT BHU Varanasi
*/
#include<iostream>
#include<stdio.h>
#include<math.h>
#include<string>
#include<cstdio>
#include<algorithm>
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
long long gcd(long long x,long long y)
{
    while (y != 0)
    {
        long long t = x % y;
        x = y;
        y = t;
    }
    return x;
}
long long choose(long long n,long long k)
{
   
    long long r = 1;
    for (long long d = 1; d <= k; ++d, --n)
    {
        long long g = gcd(r, d);
        r /= g;
        long long t = n / (d / g);
       
        r *= t;
    }
    return r;
}
int main(){
	int T;
	long long N,M,Tm;
	scanint(T);
	while(T--){
		scanintl(N);
		scanintl(M);
		for(long long i=0;i<N;i++)
			{
				
		}
	return 0;
}
