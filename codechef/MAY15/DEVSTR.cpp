/*Dushyant Kumar Mishra
zeroonehacker
Mathematics and Computing
IIT BHU Varanasi
*/
#include<iostream>
#include<cstdio>
#include<cstring>
using namespace std;
void flip(char *p){
	if(p[0] == '0')p[0] ='1';
	else p[0] = '0';
	}
int main(){
	long long int T,K,N,i,res =0,res1 = 1;
	char S[1000000],c;
	cin>>T;
	while(T--){
		cin>>N>>K;
		cin>>S;
		c = S[0];
		res = 0;res1 = 1;
		i=1;
		while(S[i]!='\0'){
			if(S[i] == c){
				res1 ++;
				if(res1 > K){
					flip(&S[i]);
					res++;
					res1=1;
				}
			}
			else res1 = 1;
		c = S[i];
		i++;
		}
		cout<<res<<endl;
		cout<<S<<endl;
	}
return 0;
}
			
