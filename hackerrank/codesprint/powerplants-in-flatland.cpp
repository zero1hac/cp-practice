#include<iostream>
#include<cstdio>
#include<algorithm>
using namespace std;
int main(){
	int N,M,temp;
	cin>>N>>M;
	int C[M];
	for(int i=0;i<M;i++){cin>>C[i];}
	sort(C,C+M);
	if(M==1){
		temp = C[0]-0 > N-C[0] ? C[0]-0 : N - C[0];
		cout<<temp;
		return 0;
		}
	temp = C[1]-C[0];
	for(int i=2;i<M;i++){if(temp<C[i]-C[i-1])temp=C[i]-C[i-1];}
//	cout<<temp;i
	if(C[0] - 0 >= temp/2){cout<<C[0] - 0;return 0;}
	if(N - 1 - C[M-1] >= temp/2) {cout<<N-1-C[M-1];return 0;} 
	//cout<<"lol";
	cout<<temp/2;
	
	
	return 0;
	
}
