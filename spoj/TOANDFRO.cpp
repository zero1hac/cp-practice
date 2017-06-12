#include<bits/stdc++.h>
using namespace std;
int main(){
	int itr,jitr,columns;
	char arr[201];
	while(1){
	cin>>columns;
	if(columns==0)break;
	else{
		cin>>arr;
		int l = strlen(arr)/columns,cov;
		for(itr=0;itr<columns;itr++){
			cov=0;
			for(jitr=1;jitr<=l;jitr++){
				if(jitr%2==1){
					cout<<arr[cov+itr];
					cov+=columns;
				}
				else{
					cov+=columns;
					cout<<arr[cov-itr-1];
				}
			}
		}
	}
	cout<<endl;
	
			
}
return 0;}
