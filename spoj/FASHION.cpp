#include<bits/stdc++.h>
#define ll long long int
using namespace std;
int main(){
	ll Test_case,Number,Women[1001],Men[1001],sums=0;
	cin>>Test_case;
	while(Test_case--){	sums=0;
		cin>>Number;
		for(ll itr=0;itr<Number;itr++){
				cin>>Women[itr];}
		for(ll itr=0;itr<Number;itr++)cin>>Men[itr];
		sort(Women,Women+Number);
		sort(Men,Men+Number);
		for(ll itr=0;itr<Number;itr++)sums+=Women[itr]*Men[itr];
	//	for(long long int i=0;i<N;i++)cout<<W[i]<<" ";
		cout<<sums<<endl;
	
	}
	return 0;
	}
