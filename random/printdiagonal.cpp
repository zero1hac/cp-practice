#include<bits/stdc++.h>
#define ll long long
#define pb push_back

using namespace std;
int main()
 {
     int T;
     cin>>T;
     while(T--){
         int N;
         cin>>N;
         cout<<N<<endl;
         vector<vector<int> > arr(N, vector<int>(N));
         //cout<<"endl\n";
         for(int i=0; i<N; i++){
             for(int j=0; j<N; j++){
                 cin>>arr[i][j];
             }
         }
         int col=0;
         //cout<<"check col\n";
         while(col<N){
             int i=0;
             int j=col;
             while(i<N && j>=0){
                 cout<<arr[i][j]<<" ";
                 i++;
                 j--;
             }
             col++;
         }
         //cout<<"check row\n";
         int row=1;
         while(row<N){
             int i=row;
             int j=N-1;
             while(i<N && j>=0){
                 cout<<arr[i][j]<<" ";
                 i++;
                 j--;
             }
             row++;
         }
         cout<<endl;
     }
	//code
	return 0;
}
