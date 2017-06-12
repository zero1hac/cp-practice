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
int main(){
	int T;
	long long int P,S;
	float sum;
	cin>>T;
	while(T--){
		cin>>P>>S;
		sum = pow(((P-sqrt(pow(P,2) - 24*S))/12),2) *(P/4 - 2 * (P-sqrt(pow(P,2) - 24*S))/12);
		printf("%.2f\n",sum);
		}

return 0;}
