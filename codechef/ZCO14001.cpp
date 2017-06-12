//Solution for codechef's problem ZCO14001
#include<iostream>
#include<cmath>
#include<climits>
#include<cstdio>
using namespace std;

int main(){
	int N,H,comm, crane_pos=0, holding=0;
	cin>>N>>H;
	int boxes[N];
	for(int i=0;i<N;i++){
		cin>>boxes[i];
	}

	while(scanf("%d",&comm) && comm!=0){
		if(comm==1 && crane_pos!=0){
			crane_pos-=1;
		}
		if(comm==2 && crane_pos!=N-1){
			crane_pos+=1;
		}
		if(comm==3 && boxes[crane_pos]!=0 && holding ==0){
			boxes[crane_pos]-=1;
			holding=1;
		}
		if(comm==4 && boxes[crane_pos]!=H && holding==1){
			boxes[crane_pos]+=1;
			holding=0;
		}
	}
	for(int i=0; i<N; i++){
		cout<<boxes[i]<<" ";
	}
	return 0;
}
