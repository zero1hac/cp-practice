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
	int T,N;
	ll C,sum,x;	
	cin>>T;
	while(T--){
		cin>>N>>C;
		sum = 0;
		while(N--){
			cin>>x;
			sum+=x;
			}
		if(C>=sum)cout<<"Yes"<<endl;
		else cout<<"No"<<endl;
	}

return 0;}
