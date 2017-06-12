#include <bits/stdc++.h>
#include <limits>
#define pb push_back
#define ll long long
#define ii pair<int,int>
#define vii vector<ii >
using namespace std;
void NGE(vector<int>&v,vector<int>&nge)
{
	stack<int> val,ind;
	val.push(v[0]),ind.push(0);
	for (int i = 1; i < v.size(); i += 1)
	{
		while(!val.empty() && v[i]>val.top())
		{
			int ix=ind.top();
			nge[ix]=i-ix-1;
			ind.pop();
			val.pop();
		}
		val.push(v[i]);
		ind.push(i);
	}
	while(!val.empty())
	{
		int ix=ind.top();
		nge[ix]=v.size()-ix-1;
		val.pop();
		ind.pop();
	}
}
void PGE(vector<int>&v,vector<int>&pge)
{
	stack<int> val,ind;
	val.push(v[v.size()-1]),ind.push(v.size()-1);
	for (int i = v.size()-2; i >= 0; i -= 1)
	{
		while(!val.empty() && v[i]>=val.top())
		{
			int ix=ind.top();
			pge[ix]=ix-i-1;
			//cout<<ind.top()<<" "<<val.top()<<'\n';
			ind.pop();
			val.pop();
		}
		val.push(v[i]);
		ind.push(i);
	}
	while(!val.empty())
	{
		int ix=ind.top();
		pge[ix]=ix;
		ind.pop();
		val.pop();
	}
}
int main (int argc, char const* argv[])
{
	vector<int>v;
	int n,m;
	scanf("%d %d",&n,&m);
	for (int i = 0; i < n; i += 1)
	{
		int temp;
		scanf("%d",&temp);
		v.pb(temp);
	}
	cout<<v.size();
	vector<int>nge(v.size(),0),pge(v.size(),0);
	NGE(v,nge);
	//for (auto i:nge)cout<<i<<' ';
	PGE(v,pge);

	//cout<<'\n';
	//for (auto i:pge)cout<<i<<' ';
	//cout<<'\n';
	vector<pair<int,long long> >ans(v.size());
	for (int i = 0; i < v.size(); i += 1)
		ans[i]=make_pair(v[i],(1ll+nge[i])*(1ll+pge[i]));
	sort(ans.begin(),ans.end());
	vector<ll>cnt(v.size(),0);
	for (int i = 0; i < v.size(); i += 1)
	{
		v[i]=ans[i].first;
		//cout<<"cnt["<<i<<"] = "<<cnt[i]<<" ";
		cnt[i]=ans[i].second;
		if(i) cnt[i]+=cnt[i-1];
		//cout<<"cnt["<<i<<"] = "<<cnt[i]<<" "<<"v["<<i<<"] = "<<v[i]<<'\n';
	}
	//for (auto i:cnt)cout<<i<<' ';
	//cout<<'\n';
	getchar();
	while(m--)
	{
			char ch,p;
			int k;
			scanf("%c %d %c",&ch,&k,&p);
			if(m)getchar();
			//cout<<"ch = "<<ch<<" k = "<<k<<" p = "<<p<<'\n';
			long long answer;
			vector<int>::iterator it1=lower_bound(v.begin(),v.end(),k);
			vector<int>::iterator it2=upper_bound(v.begin(),v.end(),k);
			if(ch=='=')
			{
				if(it1==v.end())
				answer=0;
				else if(it1==v.begin())
				{
					if(*it1==k)
					answer=cnt[(it2-v.begin())-1];
					else answer=0;
				}
				else
				{
					if(*it1==k)
					answer=cnt[(it2-v.begin())-1]-cnt[(it1-v.begin())-1];
					else answer=0;
				}
			}
			else if(ch=='>')
			{
				if(it2==v.end())answer=0;
				else if(it2==v.begin()) answer=cnt[v.size()-1];
				else
				{
					answer=cnt[v.size()-1]-cnt[it2-v.begin()-1];
				}
			}
			else
			{
				if(it1==v.begin())
				{
					answer=0;
				}
				else if(it1==v.end())answer=cnt[v.size()-1];
				else
				{
					answer=cnt[it1-v.begin()-1];
				}

			}
			//cout<<"answer = "<<answer<<'\n';
			if(answer%2==0)
			{
				if(p=='D')p='C';
				else p='D';
			}
			putchar(p);
	}
	//cout<<it->first<<"  "<<it->second<<'\n';
	return 0;
}
