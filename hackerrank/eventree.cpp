#include <vector>
#include <iostream>
#include <algorithm>
#include<cstdio>
#define gc getchar_unlocked
using namespace std;
void scanint(int &x)
{
    register int c = gc();
    x = 0;
    for(;(c<48 || c>57);c = gc());
    for(;c>47 && c<58;c = gc()) {x = (x<<1) + (x<<3) + c - 48;}
}
vector<int> arr[105];
bool visited[105];
int N,M;
int count1;

int DFS(int node)
{
    visited[node]=true;
    int vertex=0;
    for(int i=0;i<arr[node].size();i++)
    {
        
        if(!visited[arr[node][i]])
        {
            int nodes=DFS(arr[node][i]);
            if(nodes%2==0)
                count1++;
            else
                vertex+=nodes;
        }
    }
    return vertex+1;
}

int main() {
    int first, second;
    cin>>N>>M;
    for(int i=0;i<M;i++)
    {
        scanint(first);scanint(second);
        //cin>>first>>second;
        arr[first].push_back(second);
        arr[second].push_back(first);
    }
    DFS(1);
    cout<<count1;
    return 0;
}

