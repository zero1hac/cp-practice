#include<bits/stdc++.h>
using namespace std;
#define sz(a) int((a).size())
#define pb push_back
#define all(c) (c).begin(),(c).end()
#define tr(c,i) for(auto i = (c).begin(); i != (c).end(); i++)
#define present(c,x) ((c).find(x) != (c).end())
#define cpresent(c,x) (find(all(c),x) != (c).end())
#define ll long long
typedef vector<int> vi;
typedef pair<int, int> ii;
typedef vector<ii> vii;
typedef vector<vi> vvi;
typedef vector<vii> vvii;

int arr[100002][2];
vi g[100002];
int val[100002];
int in[100002], out[100002];
int result= 0;
void func(int, int);
void swap(int* a, int* b)
{
    int t = *a;
    *a = *b;
    *b = t;
}
int partition (int arr[], int low, int high)
{
    int pivot = arr[high];
    int i = (low - 1);

    for (int j = low; j <= high- 1; j++)
    {
        if (arr[j] <= pivot)
        {
            i++;
            swap(&arr[i], &arr[j]);
        }
    }
    swap(&arr[i + 1], &arr[high]);
    return (i + 1);
}

void quickSort(int arr[], int low, int high)
{
    if (low < high)
    {
        int pi = partition(arr, low, high);
        quickSort(arr, low, pi - 1);
        quickSort(arr, pi + 1, high);
    }
}

vector<int> final1;
void func_helper(int vert, int bi, int a)
{
	final1.push_back(vert);
	for(int i=0; i<g[vert].size(); i++){
		if( (g[vert][i] != bi) && (arr[g[vert][i]][a] > 0) && (in[vert] < in[g[vert][i]]) && (out[vert] > out[g[vert][i]])){
			func_helper(g[vert][i],vert,a);
		}
	}
	}


int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int N;
    cin >> N;
    for(int i=0; i<N; i++){
        cin>>val[i+1];
    }
		int arr1[] = {10,20,30,40,50,60,70};
		quickSort(arr1, 0, 6);
    for(int i=0; i<N-1; i++){
      int v1, v2;
			cin>>v1>>v2;
			g[v1].push_back(v2);
			g[v2].push_back(v1);
    }

    func(1,-1);
    int vert, a;
    int ans1 = 0;
    for(int i = 1; i <= N ; i++)
    {
    	if( ans1 < arr[i][1])
    	{
    		ans1 = arr[i][1];
    		vert = i;
    		a = 1;
    	}
    	if( ans1 < arr[i][0])
    	{
    		ans1 = arr[i][0];
    		vert = i;
    		a = 0;
    	}
    }
    func_helper(vert,-1,a);
		sort(final1.begin(), final1.end());
    cout << ans1 << endl;
    cout << final1.size() << endl;
		for(int i=0; i<final1.size(); i++){
			cout<<final1[i]<<" ";
		}
    return 0;
}
void func(int vert, int bi)
{
	result+=1;
	in[vert] = result;
	int temp1=0;
	int temp2=1;
	int black= 0, white = 0;
	for(int i=0; i<g[vert].size(); i++){
		if(g[vert][i] != bi){
			temp1 = temp1 + temp2;
			func(g[vert][i], vert);
			if(arr[g[vert][i]][0] > 0) white +=arr[g[vert][i]][0];
			if(arr[g[vert][i]][1] > 0) black +=arr[g[vert][i]][1];
		}
	}
	if (val[vert]==1){
		black+=1;
		white-=1;
	}
	else{
		white+=1;
		black-=1;
	}
	for(int i=0; i<g[vert].size(); i++){
		if(g[vert][i] != bi){
			temp1 = temp1 + temp2;
		}
	}
	temp2 = temp1;
	for(int i=0; i<g[vert].size(); i++){
		if(g[vert][i] != bi){
			temp1 = temp1 + temp2;
		}
	}
	arr[vert][0] = white;
	arr[vert][1] = black;
	result+=1;
	out[vert] = result;
}
