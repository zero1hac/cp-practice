#include<bits/stdc++.h>
#define ll long long int
using namespace std;
int main(){
	ll sumim,Number,maxums,itr;
	while(1){
		maxums=0;
		cin>>Number;
		sumim=0;
		ll counting=0;
		//ll arr[N];
		if(Number==-1)break;
		else{
			ll nums[Number];
			for(ll itr=0;itr<Number;itr++){
				cin>>nums[itr];
				sumim+=nums[itr];
				if(nums[itr]>maxums)maxums=nums[itr];}
			if(sumim%Number==0){
				ll average = sumim/Number;
				for(ll itr=0;itr<Number;itr++)
					if(nums[itr]>average)counting+=nums[itr]-average;
				cout<<counting<<endl;
				}
			else cout<<"-1"<<endl;
			}
			
}
return 0;		


}
