#include <iostream>
#include <math.h>
#define ll long long
#define gc getchar_unlocked
#define fori(i,a,b) for(int i=a;i<b;i++)
#include <bits/stdc++.h>
using namespace std;
int n[100001];
char S[100001];
void scanint(int &x)
{
    register int c = gc();
    x = 0;
    for(;(c<48 || c>57);c = gc());
    for(;c>47 && c<58;c = gc()) {x = (x<<1) + (x<<3) + c - 48;}
}
void scanintl(ll &x)
{
    register ll c = gc();
    x = 0;
    for(;(c<48 || c>57);c = gc());
    for(;c>47 && c<58;c = gc()) {x = (x<<1) + (x<<3) + c - 48;}
}
int palin1(ll i,ll j){
	int result =1;
	for(ll a=i-1,b=j-1;b>a;a++,b--)
    {
        if(S[n[a]-1]!=S[n[b]-1])
        {

            result=-1;
            break;

        }
    }
    return result;}
int palin(ll i,ll j,ll k,ll l)
{
    int result=1;
    ll aa=i;
    for(ll x=0;S[x]!='\0';x++)
        n[x]=x+1;
    for(long long x=j-1;x>=i-1;x--)
    {
        n[x]=aa;
        aa+=1;
    }

    for(ll a=k-1,b=l-1;b>a;a++,b--)
    {
        if(S[n[a]-1]!=S[n[b]-1])
        {

            result=-1;
            break;

        }
    }
    return result;
}

int main()
{
    ll Q,i,j,k,l;
    cin>>S;
    cin>>Q;
    for(ll itr=0;itr<Q;itr++)
    {
        cin>>i>>j>>k>>l;
	if(j>=k){
        if(palin(i,j,k,l)==1)
            printf("Yes\n");
        else
            printf("No\n");
    }
	else {
		if(palin1(k,l) ==1)printf("Yes\n");else printf("No\n");
}}
    return 0;
}

