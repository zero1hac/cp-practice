#include<bits/stdc++.h>
using namespace std;
int main() {
	int Arr[1002];
	int trav[1002];
	memset(trav,0,sizeof(trav));
   	int N;
   	cin>>N;
   	for(int i=1;i<=N;i++)cin>>Arr[i];
   	int hacked=0,i=0,comp=1,dir=0;
        while(hacked<N){
		i+=comp;
      		if(trav[i]==0&&hacked>=Arr[i]){
         	hacked++;
         	trav[i]=1;
      		}
       if(hacked==N)break;
       if(i==N&&comp==1&&hacked<N){comp=(-1)*comp;dir++;}
       if(i==1&&comp==-1&&hacked<N){comp=(-1)*comp;dir++;}
       }
   cout<<dir<<endl;
}


