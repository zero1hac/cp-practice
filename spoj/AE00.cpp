#include<bits/stdc++.h>
using namespace std;
int main(){
	int itr,jtr,Num,cnt=0;
	cin>>Num;
	for(itr =1;itr<=sqrt(Num);itr++)
		for(jtr=itr+1;jtr*itr<=Num;jtr++)cnt++;
	cnt+=sqrt(Num);
	cout<<cnt;
	return 0;
	}
