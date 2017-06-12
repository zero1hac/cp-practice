/*Dushyant Kumar Mishra
zeroonehacker
Mathematics and Computing 
IIT BHU Varanasi
*/
#include<iostream>
#include<stdio.h>
#include<cstdio>
#include<string>
using namespace std;
int main(){
	int T,k;
	cin>>T;
	string a;
	while(T--){
		cin>>a;
		k=0;
		for(int i=0;i<a.length();i++){
			if(a[i] == 'A' || a[i]=='D' || a[i]=='O' || a[i]=='P'|| a[i]=='Q' || a[i] =='R')
				k++;
			if(a[i]=='B')k+=2;
			}
			
		cout<<k<<endl;
		
	}
	return 0;
	}
	
