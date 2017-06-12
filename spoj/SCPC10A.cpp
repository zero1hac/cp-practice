#include<bits/stdc++.h>
using namespace std;
int main(){
	int first,second,third;
	while(1){
		cin>>first>>second>>third;
		if(first==0&& second==0 && third==0)break;
		else{
			if(second-first == third-second)cout<<"AP "<<third+third-second<<endl;
			else if(second/first == third/second)cout<<"GP "<<third*third/second<<endl;
		}
	}
	return 0;
	}
