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
float area(ll X[],ll Y[],int numpoints){
	float area = 0;
	int j = numpoints-1;
	fori(i,0,numpoints){
		area+=(X[j]+X[i])*(Y[j]-Y[i]);
		j=i;
		}
	return fabs(area);
}
int main(){
	int T,N,M,x;
	float g;
	scanint(T);
	while(T--){
		scanint(N);
		float Areas[N];
		float sorteda[N];
		fori(i,0,N){
			scanint(M);	
			ll X[M];ll Y[M];
			fori(j,0,M){
				scanintl(X[j]);
				scanintl(Y[j]);
				}
			g=area(X,Y,M);
			Areas[i] = g;
			sorteda[i]=g;
			}
		sort(sorteda,sorteda+N);
		fori(i,0,N){
			x = distance(sorteda,find(sorteda,sorteda+N,Areas[i]));
			printf("%d",x);
		}
	}
return 0;
}	
