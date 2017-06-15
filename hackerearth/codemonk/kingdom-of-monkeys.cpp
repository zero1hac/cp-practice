#include<iostream>
#include<vector>
using namespace std;

vector < vector <int> > graph;
bool visited[100001];
long long  arr[100001];	
long long sum=0;
void dfs(int s){
	//if(visited[s] == true)return 0;
	sum+=arr[s-1];
	visited[s] = true;
	for(int i=0; i<graph[s].size(); i++){
		if(visited[graph[s][i]]==false){
			dfs(graph[s][i]);
		}
	}
//	return sum;
}


void init(){
	for(int i=0; i<100002; i++){
		visited[i]=false;
	}
}

int main(){
	int nodes, edges, x, y, conComp = 0, T, N, M;
	cin>>T;
	while(T--){
	cin>>N>>M;
	graph.clear();	
	graph.resize(N+5);
	for(int i=0; i<M; i++){
		cin>>x>>y;
		graph[x].push_back(y);
		graph[y].push_back(x);
	}
	for(int i=0; i<N; i++){
                cin>>arr[i];
        }
	init();
	cout<<endl;
	long long max=0;
	for(int i=1; i<=N; i++){
		if(visited[i]==false){
			sum=0;
			dfs(i);
			//cout<<k;
			if(sum>max)max=sum;
		}
	}
	cout<<max<<endl;}
	return 0;
}
	
