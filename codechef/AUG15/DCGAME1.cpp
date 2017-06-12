/*Dushyant Kumar Mishra
zeroonehacker
MAthematics and Computing
IIT BHU VARanasi
*/
#include<iostream>
#include<algorithm>
#include<vector>
#include<stack>
#define foriab(i,a,b) for(long long int i=a;i<b;i++)
#define rofiab(i,a,b) for(long long int i=a;i>=b;i--)
using namespace std;
#include<cstdio>
#define gc getchar_unlocked
void scanint(long long int &x)
{
    register long long int c = gc();
    x = 0;
    for(;(c<48 || c>57);c = gc());
    for(;c>47 && c<58;c = gc()) {x = (x<<1) + (x<<3) + c - 48;}
}
unsigned int gcd(unsigned int u,unsigned int v){
	int shift;
	if(u == 0) return v;
	if(v == 0) return u;
	shift = __builtin_ctz(u | v);
	u >>= __builtin_ctz(u);
	do{
		v >>= __builtin_ctz(v);
		if(u > v){
			unsigned int t = v;
			v = u;
			u = t;
		}
		v = v-u;
		}while(v !=0);
		return u<<shift;
	}
void quickSort(int arr[], int left, int right) {
      int i = left, j = right;
      int tmp;
      int pivot = arr[(left + right) / 2];

      /* partition */
      while (i <= j) {
            while (arr[i] < pivot)
                  i++;
            while (arr[j] > pivot)
                  j--;
            if (i <= j) {
                  tmp = arr[i];
                  arr[i] = arr[j];
                  arr[j] = tmp;
                  i++;
                  j--;
            }
      };

      /* recursion */
      if (left < j)
            quickSort(arr, left, j);
      if (i < right)
            quickSort(arr, i, right);
}
int main(){
    vector<long long int> arr;
    int a[10]={1,2,3,4,5,6,7,8,9,10};
    char oper,play;
    long long int N,M,lol,key1,num,flag;
    scanint(N);scanint(M);
    foriab(i,0,N){scanint(lol);arr.push_back(lol);}
    vector<long long int> li(arr.size(),0),ri(arr.size(),0),numcount(arr.size(),0);
    stack<long long int> temp,keys;
    temp.push(arr[0]);keys.push(0);
    foriab(i,0,arr.size()){
        while(!temp.empty() && arr[i]>temp.top())
		{
			key1=keys.top();
			li[key1]=i-key1-1;
			keys.pop();temp.pop();
		}
		temp.push(arr[i]);keys.push(i);
		}
    while(!temp.empty())
	{
		key1=keys.top();
		li[key1]=arr.size()-key1-1;
		temp.pop();keys.pop();
	}
	while(!temp.empty())temp.pop();while(!keys.empty())keys.pop();
	temp.push(arr.back());keys.push(arr.size()-1);
    rofiab(i,arr.size()-2,0){
        while(!temp.empty() && arr[i]>=temp.top())
		{
			key1=keys.top();
			ri[key1]=key1-i-1;
			keys.pop();temp.pop();
		}
		temp.push(arr[i]);keys.push(i);
		}

    while(!temp.empty())
	{
		key1=keys.top();
		ri[key1]=key1;
		temp.pop();keys.pop();
	}
	vector<pair<long long int,long long int> > coun(arr.size());
	foriab(i,0,arr.size())
		coun[i]=make_pair(arr[i],(1ll+li[i])*(1ll+ri[i]));
    sort(coun.begin(),coun.end());
	foriab(i,0,arr.size())
	{
		arr[i]=coun[i].first;
		numcount[i]=coun[i].second;
		if(i>0) numcount[i]+=numcount[i-1];
	}
	quickSort(a,0,9);
	while(M--){

        cin>>oper>>num>>play;
        vector<long long int>::iterator one=lower_bound(arr.begin(),arr.end(),num);
        vector<long long int>::iterator two=upper_bound(arr.begin(),arr.end(),num);
        switch(oper){
            case '=': if(one==arr.end())
                        flag=0;
                        else if(one==arr.begin())
                        {
                            if(*one==num)
                            flag=numcount[(two-arr.begin())-1];
                            else flag=0;
                        }
                            else
                        {
                            if(*one==num)
                            flag=numcount[(two-arr.begin())-1]-numcount[(one-arr.begin())-1];
                            else flag=0;
                        }
                        break;
            case '>': if(two==arr.end())flag=0;
                    else if(two==arr.begin())flag=numcount[arr.size()-1];
                    else
                    {
                        flag=numcount[arr.size()-1]-numcount[two-arr.begin()-1];
                    }
                    break;
            case '<': if(one==arr.begin())
                    {
                        flag=0;
                    }
                    else if(one==arr.end())flag=numcount[arr.size()-1];
                    else
                    {
                        flag=numcount[one-arr.begin()-1];
                    }
                    break;
            default : break;
                    }
            if(!(flag%2))
			{
				if(play=='D')play='C';
				else play='D';
			}
			cout<<play;
			if(M==0)cout<<endl;
        }
        return 0;
        }

