#include<iostream>
#include<cmath>
using namespace std;
int main(){
	long long int N,M,A;
	cin>>N>>M>>A;
	if(N%A!=0)
		N=N/A+1;
	else N=N/A;
	if(M%A!=0)
		M=M/A+1;
	else M=M/A;
	cout<<N*M;
	return 0;
	}
