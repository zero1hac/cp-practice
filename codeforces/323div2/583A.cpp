#include<bits/stdc++.h>
using namespace std;
int main(){
	int N,i,j,hi,vi,row[501]={0},col[501]={0},count=0;
	cin>>N;
	for(i=0;i<N*N;i++){
		cin>>hi>>vi;count++;
		if(row[hi]==0&&col[vi]==0){
			cout<<count<<" ";row[hi]=1;col[vi]=1;}
	}
	return 0;
	}
