#include<bits/stdc++.h>
using namespace std;

int main(){
    int N,M;
    cin>>N>>M;
    char arr[N][M];
    for(int i=0; i<N; i++){
        for(int j=0;j<M; j++){
            cin>>arr[i][j];
        }
    }
    int count=0,max1=0; 
    for(int i=0; i<N; i++){
        for(int j=0;j<M; j++){
            if(arr[i][j]=='B')count++;
        }
    }
    int left = 0;
    int flag=0;
    for(int i=0; i<M; i++){
        for(int j=0; j<N; j++){
            if(arr[j][i] == 'B'){left=i;flag=1;break;}
        }
        if(flag==1)break;
        left = i;

    }
    int right = 0;
    flag =0;
    for(int i=M-1; i>=0; i--){
        for(int j=0; j<N; j++){
            if(arr[j][i] == 'B'){right = i;
            flag=1;
            break;
            }
        }
        if(flag==1)break;

        right = i;
    }

    int left_right = right - left;

    int up = 0;
    flag=0;
    for(int j=0; j<N; j++){
        for(int i=0; i<M; i++){
            if(arr[j][i] == 'B'){up=j;flag=1;break;}
        }
        if(flag==1)break;
        up = j;

    }
    int down = 0;
    flag =0;
    for(int j=N-1; j>=0; j--){
        for(int i=0; i<M; i++){
            if(arr[j][i] == 'B'){down = j;
            flag=1;
            break;
            }
        }
        if(flag==1)break;

        down = j;
    }

    int up_down = down - up;
   // cout<<"up"<<up<<endl;
    //cout<<"down"<<down<<endl;
   // cout<<"left"<<left<<endl;
   // cout<<"right"<<right<<endl;
    //cout<<"left_right"<<left_right<<endl;
    //cout<<"up_down"<<up_down<<endl;
    if(left_right < 0){cout<<1;return 0;}
    else {
        max1 = max(left_right,up_down)+1;

    }
    
    if(max1>M || max1 >N){
        cout<<"-1";
        return 0;
    }
    int paint = max1*max1 - count;
    cout<<paint;
    return 0;
}
