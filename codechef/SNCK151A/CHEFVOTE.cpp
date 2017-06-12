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
int main(){
	int T,c[50],sum,N,flag;
	cin>>T;
	while(T--){
		cin>>N;
		sum = 0;
		flag =0;
		fori(i,0,N){cin>>c[i];sum+=c[i];if(c[i]>=N){cout<<"-1"<<endl;flag=1;}}
		if(flag==1)continue;
		if(sum>N){ cout<<"-1"<<endl;continue;}
		else{
			if(N==2){cout<<"2 1"<<endl;continue;}
			fori(i,0,N){
				while(c[i]--){
					
					if(i+2<=N){cout<<i+2<<" ";}
					else {
						cout<<N-1<<" ";}}
		cout<<endl;}}		
		

return 0;}
