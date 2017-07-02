#include<iostream>
using namespace std;

int main(){
	int m, n;
	cin>>n>>m;
	char s[1001];
	char t[1001];
	cin>>s;
	cin>>t;
	int min1 = 10000, min_index=0;
	for(int i=0; i<=m-n; i++){
		int count=0;
		for(int j=0; j<n; j++){
			if(s[j]!=t[i + j])count++;
			}
		if(count<min1){min_index = i;min1=count;}
	}
	cout<<min1<<endl;
	//cout<<n - min1<<endl;
	for(int i=min_index;i<=m-n; i++){
		for(int j=0; j<n; j++){
			if(s[j]!=t[i + j])cout<<j+1<<" ";
			}
		break;}
	return 0;
	
	
}
