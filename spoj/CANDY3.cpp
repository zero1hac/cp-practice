#include<bits/stdc++.h>
#define ll long long int
using namespace std;
int main(){
	ll Test_case,sums;
	cin>>Test_case;
	while(Test_case--){
		ll Nums,co;
		sums=0;
		cin>>Nums;
		for(ll itr=1;itr<=Nums;itr++){
			cin>>co;
			sums+=co%Nums;
		}
		if(sums%Nums==0)cout<<"YES"<<endl;
		else cout<<"NO"<<endl;
	}
	return 0;
}
