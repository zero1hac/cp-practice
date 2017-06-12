#include<iostream>
#include<cstdio>
using namespace std;
bool subsumexist(int a[],int N,int K){
		int curr_sum = a[0],start=0;
		for(int i=1;i<N;i++){
			while(curr_sum > K && start < i-1){
				curr_sum = curr_sum - a[start];
				start ++;
				}
			if(curr_sum == K ) return true;
			if(i<N)curr_sum+=a[i];
			}
		return false;
		}
int main(){
	int a[] ={3,4,8,10,12,25,2,3};
	if(subsumexist(a,8,1))cout<<"YES";
	else cout<<"NO";
	return 0;} 
