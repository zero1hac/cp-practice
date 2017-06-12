/*Dushyant Kumar Mishra
zeroonehacker
Mathematics and Computing
IIT BHU Varanasi
*/
#include<iostream>
#include<stdio.h>
#include<string>
#define gc getchar_unlocked
#include<math.h>
void scanint(int &x)
{
    register int c = gc();
    x = 0;
    for(;(c<48 || c>57);c = gc());
    for(;c>47 && c<58;c = gc()) {x = (x<<1) + (x<<3) + c - 48;}
}

using namespace std;
int main(){
	int T,B,LS;
	scanint(T);
	while(T--){
		scanint(B);
		scanint(LS);
		printf("%f %f\n",sqrt(LS*LS - B*B),sqrt(LS*LS+B*B));
	
	}
return 0;}
