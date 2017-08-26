#include<bits/stdc++.h>
using namespace std;


int main() {
    long long int n, m;
    cin>>n>>m;
    long long int arr[m];
    for(long long int i=0; i<m; i++){
        cin>>arr[i];
    }

    long long int dp[m+1][n+1];
    memset(dp, 0, sizeof(dp));
    for(long long int i=0; i<=m; i++){
        dp[i][0]=1;
    }
    for(long long int i=1; i<=m; i++){
        for(long long int j=1; j<=n; j++){
            if(arr[i-1] > j){
               dp[i][j] = dp[i-1][j];
            }
            else{
                dp[i][j] = dp[i-1][j] + dp[i][j-arr[i-1]];
            }

        }
    }
    cout<<dp[m][n];
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    return 0;
}
