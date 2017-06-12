#include<algorithm>
#include<vector>
#include<cstdio>
#include<iostream>
#define pb push_back
using namespace std;
void permut(vector<int>&v,vector<int>&vd)
{
	int n=vd.size();
	int *vote=new int[v.size()+1];
	for(int i=1;i<v.size();i++)
	vote[i]=0;
	vector<int>p(v.size()+1);
	for(int i=0;i<n;i++)
	if(i==n-1)
	p[vd[i]]=vd[0],v[vd[0]]--,vote[vd[i]]=1;
	else
	p[vd[i]]=vd[i+1],v[vd[i+1]]--,vote[vd[i]]=1;
	for(int i=1;i<v.size();i++)
	{
		int j=1;
		while(v[i])
		{
			if(vote[j]==0)
			{
			p[j]=i;
			vote[j]=1;
			v[i]--;
			j++;
			}
			else j++;
		}
		
	}
	for(int i=1;i<v.size();i++)
	{
	printf("%d",p[i]);
	if(i!=v.size()-1)
	printf(" ");
	}
	printf("\n");
}
int main()
{
int t;
scanf("%d",&t);
while(t--)
{
	int n,temp,flag=0,sum=0;
	scanf("%d",&n);
	vector<int>v;
	vector<int>vd;
	v.pb(-1);
	for(int i=0;i<n;i++)
	{
	scanf("%d",&temp);
	v.pb(temp);
	sum+=temp;
	if(temp>=n)
	flag=1;
	if(temp)
	vd.pb(i+1);
	}
	if(sum>n)
	flag=1;
	if(flag)
	printf("-1\n");
	else
	permut(v,vd);
	
}
}
