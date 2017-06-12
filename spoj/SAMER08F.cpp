#include<bits/stdc++.h>
using namespace std;
int main(){
	int Number,itr,answer;
	while(1){
		cin>>Number;
		if(Number==0)break;
		else{
			itr=1;answer=0;
			while(itr<=Number){answer+=itr*itr;
				itr++;
			}
			cout<<answer<<endl;
		}
	}
	return 0;
	}
