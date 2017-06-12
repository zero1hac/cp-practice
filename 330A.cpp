#include<iostream>
#include<cstring>
using namespace std;

int main(){
	char a[10][10];
	int x[10], y[10];
	memset(x, 0, 10*sizeof(int));
	memset(y, 0, 10*sizeof(int));
	int r, c;
	cin>>r>>c;
//	for(int i=0;i<r;i++)cout<<y[i]<<" ";
//	cout<<endl;
//	for(int i=0;i<c;i++)cout<<x[i]<<" ";
	for(int i=0;i<r;i++){
		for(int j=0; j<c;j++)cin>>a[i][j];}
	int count_x=0;
	int count_y=0;
	for(int i=0;i<r;i++){
		for(int j=0;j<c;j++)if(a[i][j]=='S')x[j]+=1;
		}
	for(int i=0;i<c;i++){
                if(x[i]>0)count_x++;
                }
	for(int i=0;i<c;i++){
                for(int j=0;j<r;j++)if(a[j][i]=='S')y[j]+=1;
                }
        for(int i=0;i<r;i++){
                if(y[i]>0)count_y++;
                }
//	for(int i=0;i<r;i++)cout<<y[i]<<" ";
//	cout<<endl;
  //      for(int i=0;i<c;i++)cout<<x[i]<<" ";

//	cout<<"Count_x "<<count_x;
//	cout<<"\nCount_y "<<count_y;
	int total_x = c - count_x;
	int total_y = r-count_y;
	int common = total_x*total_y;
	cout<<total_x*r + total_y*c - common;
	return 0;
}
