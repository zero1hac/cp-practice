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

#define TRACE
#ifdef TRACE
#define trace(...) __f(#__VA_ARGS__, __VA_ARGS__)
template <typename Arg1>
void __f(const char* name, Arg1&& arg1){
    cerr << name << " : " << arg1 << std::endl;
}
template <typename Arg1, typename... Args>
void __f(const char* names, Arg1&& arg1, Args&&... args){
    const char* comma = strchr(names + 1, ',');cerr.write(names, comma - names) << " : " << arg1<<" | ";__f(comma+1, args...);
}
#else
#define trace(...)
#endif


bool has_duplicate(vector<vector<int> > &sudoku, int start_row, int end_row, int start_col, int end_col){
  vector<bool> vec(10, false);
  for(int i=start_row; i<end_row; i++){
    for(int j=start_col; j<end_col; j++){
      if(vec[sudoku[i][j]] && sudoku[i][j]!=0)return true;
      else{
        vec[sudoku[i][j]] = true;
      }
    }
  }
  return false;
}

bool sudoku_checker(vector<vector<int> > &sudoku){
  //checking row constraints
  for(int i=0; i<sudoku.size(); i++){
    if(has_duplicate(sudoku, i, i+1, 0, sudoku[0].size())){
      return  false;
    }
  }
  //Checking column constraints
  for(int i=0; i<sudoku.size(); i++){
    if(has_duplicate(sudoku, 0, sudoku.size(), i, i+1)){
      return false;
    }
  }

  //Checking region constraints
  int region_size = sqrt(sudoku.size());
  for(int i=0; i<region_size; i++){
    for(int j=0; j<region_size; j++){
        if(has_duplicate(sudoku, region_size*(i), region_size*(i+1), region_size*(j), region_size*(j+1)))
        return false;
    }
  }
  return true;
}
int main(){
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  int N;
  cin>>N;
  vector<vector<int> > sudoku(N, vector<int> (N, 0));
  for(int i=0; i<N; i++){
    for(int j=0; j<N; j++){
      cin>>sudoku[i][j];
    }
  }

  if(sudoku_checker(sudoku))
  cout<<"Valid\n";
  else cout<<"Invalid\n";
  return 0;
}
