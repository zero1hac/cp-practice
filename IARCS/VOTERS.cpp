//Solution to IARCS problem archive VOTERS
#include<iostream>
#include<cmath>
#include<climits>
using namespace std;

int main(){
	int N1, N2, N3, temp, max= INT_MIN, count=0;
	cin>>N1>>N2>>N3;
	int arr[1000000];
	for(int i=0;i<N1+N2+N3; i++){
		cin>>temp;
		arr[temp]++;
		max = temp>max ? temp:max;
	}
	int j=0;
	int finallist[max];
	for(int i=0; i<=max; i++){
		if(arr[i]>=2){
			count+=1;
			finallist[j++] = i;
		}
	}
	cout<<count<<endl;
	for(int i=0; i<count; i++){
		cout<<finallist[i]<<endl;
	}
	return 0;
}
