#include<bits/stdc++.h>
using namespace std;

int main(){
    int g;
    cin>>g;
    while(g--){
        int n,m,x;
        cin>>n>>m>>x;
        vector<int> a(n);
        vector<int> b(m);
        for(int i=0; i<n; i++){
            cin>>a[i];
        }
        for(int j=0; j<m; j++){
            cin>>b[j];
        }
        int sum1=0, count=0;
        int i=0;
        while(i<n && sum1+a[i]<=x){
            sum1+=a[i];
            i++;
        }
        count = i;
        for(int j=0; j<m && i>=0; ){
            sum1 += b[j];
            j++;
            while(sum1>x && i>=0){
                i--;
                sum1 -= a[i];
            }
            if(sum1 <=x && i+j > count){
                count = i+j;
            }
        }
        cout<<count<<endl;

    }
    return 0;
}
