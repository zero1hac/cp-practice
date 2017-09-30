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

vector<string> s;
int arr[1002][1002];
bool isvalid(int i, int j, int N)
{
	return ( i > 0 && j >0 && i <= N && j <= N && s[i][j] != 'X');
}

int dirx[] = {0, -1, -1};
int diry[] = {-1, -1, 0};
int mat(int i, int j)
{
	if( arr[i][j] != -1 ) return arr[i][j];
	unordered_set<int> temp;
	for(int x = 0 ;x < 3 ; x++)
	{
		int xx = i + dirx[x];
		int yy = i + diry[x];
		if( isvalid(xx,yy) )
			temp.insert(rec(xx,yy));
	}
	for(int x = 0 ; ; x++)
	{
		if( temp.find(x) == temp.end() )
		{
			return arr[i][j] = x;
		}
	}
}


int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int Q;
    cin>>Q;
    while(Q--)
    {
    	cin>>N;
      s.clear();
    	memset(arr, -1, sizeof(arr));
    	for(int i = 1 ; i<= N ; i++){
    		string temp;
        cin>>temp;
        s.push_back(temp);
    	}
    	vector<int> grundt;
    	vector< pair<int,int> > final;
    	for(int i =1 ; i <= N ; i++)
    	{
    		for(int j = 1; j <= N ; j++)
    		{
    			if( s[i][j] == 'K')
    			{
    				grundt.push_back(mat(i,j));
    				final.push_back(make_pair(i,j));
    			}
    		}
    	}
    	int num_ways = 0;
      for(int i=0; i<grundt.size(); i++){
      num_ways = num_ways^grundt[i];
      }
    	int result =0;
    	for(int j = 0 ; j < final.size() ; j++)
    	{
    		int k = grundt[j];
    		int a = final[j].first;
    		int b = final[j].second;
    		int temp = ans^k;
    		for(int i = 0 ;i < 3 ; i++)
			{
				int xx = a + dirx[i];
				int yy = b + diry[i];
				if( isvalid(xx,yy) )
					if( temp == mat(xx,yy) )result++;
			}
    	}
    	if(ans){
        cout<<"WIN "<<result<<endl;
      }
    	else{
      cout<<"LOSE"<<endl;
      }
    }
    return 0;
}
