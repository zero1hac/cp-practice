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
unsigned long long int gcd(unsigned long long int m,unsigned long long int n){
unsigned long long int r;



    do
    {
        r = m % n;
        if(r == 0)
            break;
        m = n;
        n = r;
    }
    while(true);

    return n;
     
}

int main(){
	int T,flag;
	unsigned long long int A,B,i;
	cin>>T;
	while(T--){
		cin>>A;
		cin>>B;
		B = gcd(A,B);
		i=2;
		flag =0;
		if(B==1){cout<<"No"<<endl;continue;}
		while(i<sqrt(B)){
			if(B%i == 0){
				if(A%i != 0){
					flag =1;
					cout<<"No\n";
					break;
				}
				B/=i;
				}
			else {
				i++;
			}
		}
		
		if(flag==0) cout<<"Yes\n";
	}
return 0;}
