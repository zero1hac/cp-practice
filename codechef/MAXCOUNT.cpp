/*Dushyant Kumar Mishra
zeroonehacker
Mathematics and Computing
IIT BHU Varanasi
*/
#include<iostream>
#include<stdio.h>
#include<string>
#define ll long long int
using namespace std;
int main(){
	int T,N,A[100],best=0,besti=0,its,i;
	cin>>T;
	while(T--){
		cin>>N;
		i=0;
		while(i<N){
			cin>>A[i];
			its = 0;
			for(int j=0;j<i+1;j++){
				if(A[i] == A[j])its++;
			}
			if(its>best || (its ==best && A[i] <besti))
			{
				best = its ; besti = A[i];
			}
	
			i++;
		}
		printf("%d %d\n",besti,best);
		
}
return 0;}
