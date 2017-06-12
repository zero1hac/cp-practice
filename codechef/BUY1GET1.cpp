/*Dushyant Kumar Mishra
zeroonehacker
Mathematics and Computing
IIT BHU Varanasi
*/
#include<iostream>
#include<stdio.h>
#include<string>
#include<math.h>
using namespace std;
#define gc getchar_unlocked

void scanint(int &x)
{
    register int c = gc();
    x = 0;
    for(;(c<48 || c>57);c = gc());
    for(;c>47 && c<58;c = gc()) {x = (x<<1) + (x<<3) + c - 48;}
}

int main(){
	string S;
	int T,i,j,sumi,count;
	scanint(T);
	while(T--){
		cin>>S;
		sumi=0;
		for(i=0;i<S.length()-1;i++){
			count = 0;
			if(S[i] == '2')continue;
			for(j=i+1;j<S.length();j++){
				if(S[j] =='2');
				if(S[i] == S[j]){
					S[j]='2';
					count++;
					}
				}
			if(count%2==0)count/=2;
			else count=count/2+1;
			sumi+=count;
			}
		printf("%d\n",sumi);
	}
	return 0;
}
	


