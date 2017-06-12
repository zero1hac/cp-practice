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
bool is_prime(long long int z){
	long long int i=2;
	if(z==3) return true;
	while(i<=sqrt(z)){
		if(z%i == 0)return false;
		i++;
	}
	return true;
	}
	
int main(){
	int T;
	int x,y;
	long long int z,k;
	cin>>T;
	while(T--){
		cin>>x>>y;
		k=1;
		for(;;k++){
			if(is_prime(x+y+k))break;
		}
		cout<<k<<endl;
	}

return 0;}
