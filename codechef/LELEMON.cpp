#include <bits/stdc++.h>
using namespace std;
int greate(int a,int b)
{
	return a<b ? 0:1;
}
int main(){
	int T;
	cin>>T;
	while(T--){

		int n,m;
		cin>>n>>m;
		int p[n][m];
		for(int i=0;i<m;i++){
			d[i]=0;
		}
		for(int i=0;i<m;i++){
			cin>>p[i];
			d[p[i]]++;
		}
	for(int i=0;i<n;i++){
		int c;
		cin>>c;
		int bn[c];
		for(int j=0;j<c;++j){
			cin>>v[j];
		}
		
