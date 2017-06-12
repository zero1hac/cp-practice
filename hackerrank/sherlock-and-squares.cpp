#include<bits/stdc++.h>
using namespace std;
int main(){
	long long int A,B;
	int T;
		cin>>T;
	while(T--)
	{
		long long int count=0;
		cin>>A>>B;
		cout<<static_cast<long long int>(ceil(sqrt((double)B+1.0))) - static_cast<long long int>(ceil(sqrt((float)A)))<<endl;
	}
	return 0;
}
