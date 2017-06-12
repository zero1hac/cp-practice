/*Dushyant Kumar Mishra
zeroonehacker
Mathematics and Computing
IIT BHU Varanasi
*/
#include<iostream>
#include<stdio.h>
#include<string>
using namespace std;
int main(){
	int T;
	long long int A,B;
	cin>>T;
	while(T--){
		cin>>A>>B;
		if(A>B)cout<<A<<" "<<A+B<<endl;
		else cout<<B<<" "<<A+B<<endl;
	}


return 0;}
