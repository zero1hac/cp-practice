#include<iostream>
#include<vector>
#include<queue>
using namespace std;

vector <int> graph[2000];
bool visited[2000];


void init(){
	for(int i=0; i<2000;i++){
		visited[i]=false;
	}
}

int bfs(int s){
	int sum=0;
	queue <int> q;
	q.push(s);
	visited[s] = true;
	sum++;
	while(!q.empty()){
		int v = q.front();
		q.pop();
		for(int i=0;i<graph[v].size(); i++){
			if(visited[graph[v][i]]==false){
				q.push(graph[v][i]);
				visited[graph[v][i]] = true;
				sum++;
				}
			}
		}
//	cout<<s<<" "<<sum<<"\n";
	return sum;
}
int main(){
	int nodes, edges, x, y, p;
	init();
	cin>>nodes>>edges;
	for(int i=0;i<edges;i++){
		cin>>x>>y;
		graph[x].push_back(y);	
	//	graph[y].push_back(x);
	//	cout<<"Print graph";
	//	for(int j=0; j<10;j++){
	//		for(int k=0;k<graph[j].size(); k++){
	//			cout<<graph[j][k]<<" ";
	//		}
	//		cout<<endl;
	//	}
	}
	//cout<<"BS";
	int min=100000;
	for(int i=1;i<=nodes;i++){
		init();
		int k = bfs(i);
		if(min>k)min=k;
		
	}
	cout<< min<<endl;
	return 0;
}	
