#include<bits/stdc++.h>
using namespace std;
int main(){
	int N,temp;
	cin>>N;
	int A[N];
	for(int i=0;i<N;i++){
		scanf("%d",&temp);
		A[i] = temp;}cout<<"Check";
	int px=0,first,present,count=0;
	while(A[px]==0&&px<N){
		first = px;
		px++;
	}
	if(px!=N){
		for(int i=first;i<N;){
			present=0;
			if(A[i]==1){count++;i++;}
			else{while(A[i]==0 && i<N){present++;i++;}if(present<=1)count++;
		}
	}
	}
	cout<<count;
		return 0;
	}
