#include <iostream>
#include <cstdio>
#include <cstring>
#include <algorithm>
#include <vector>
#include <cmath>
#define ll long long int
using namespace std;
vector<ll> res[1000002];
int arr1[1000002],arr2[1000002];

int gni[1000002];
int result=0;
int cool[1000002];
void util(int v, int q){
    result-=gni[v];
    arr1[v]=0;
    arr2[v]=0;
    cool[v]=0;
    int l1=0, l2=0;
    for(long long int i=0;i<res[v].size();i+=1){
    if(res[v][i]==q) continue;
    if(cool[res[v][i]]==0) continue;
    util(res[v][i],v);
    l1 = l1 + arr2[res[v][i]];
    l2 = l2 +  max(arr1[res[v][i]], arr2[res[v][i]]);
    }
    arr1[v] = gni[v] + l1;
    arr2[v] = l2;
    
}
int main() {
    long long int T,Km=0,l,m;
	char ch;
    cin>>T;
    for(long long int i=0;i<T;i++){
        
        cin>>ch;
        if(ch=='A'){
            cin>>l;
            gni[++Km]=l;
            result=result+gni[Km];
            cool[Km]=1;
        }
        if(ch=='B'){
            cin>>l>>m;
            res[l].push_back(l);
            res[m].push_back(m);
        }
        if(ch=='C'){
           
            cin>>l;
            util(l,-1);
            gni[++Km]=max(arr1[l],arr2[l]);
            result=result+gni[Km];
            cool[Km]=1;
        }

        
    }
    for(long long int i=1;i<1000002;i++){
        if(cool[i]==1){
            util(i,-1);
            result=result + max(arr1[i],arr2[i]);
        }i+=1;
    }
    cout<<result<<endl;
    return 0;
}
