#include<bits/stdc++.h>
using namespace std;
map <long long int, long long int> dpmap;
long long funcdp(long long int Nums){
	if(Nums==0)return 0;
	long long int temp = dpmap[Nums];
	if(temp==0){
		temp= max(Nums,funcdp(Nums/2)+funcdp(Nums/3)+funcdp(Nums/4));
		dpmap[Nums] = temp;
		}
	return temp;
	}

int main(){
	long long int Nums,temp;
	while(scanf("%lld",&Nums)==1){ temp = funcdp(Nums);cout<<temp<<endl;}
	return 0;
	}
