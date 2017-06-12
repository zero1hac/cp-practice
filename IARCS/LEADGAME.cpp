//Solution to problem LEADGAME on IARCS Problem archive
#include<iostream>
#include<cmath>
#include<climits>
using namespace std;


int main(){
	int N, max_lead= INT_MIN, first, second, winner, cummu_first=0, cummu_second=0;
	cin>>N;
	while(N--){
		cin>>first>>second;
		cummu_first += first;
		cummu_second += second;

		if(abs(cummu_first - cummu_second) >= max_lead){
			max_lead = abs(cummu_first - cummu_second);
			winner = cummu_first > cummu_second ? 1:2;
		
		}
	}
	cout<<winner<<" "<<max_lead<<endl;
	return 0;
}
