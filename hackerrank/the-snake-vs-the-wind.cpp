#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;
int N;
int arr[70][70];
void rotateMatrix(int mat[][70])
{
    for (int x = 0; x < N / 2; x++)
    {
        for (int y = x; y < N-x-1; y++)
        {
            int temp = mat[x][y];
            mat[x][y] = mat[y][N-1-x];
            mat[y][N-1-x] = mat[N-1-x][N-1-y];
            mat[N-1-x][N-1-y] = mat[N-1-y][x];
            mat[N-1-y][x] = temp;
        }
    }
}

void tpMatrix(int A[][70])
{
   
    int i, j;
    for (i = 0; i < N; i++)
        for (j = 0; j < i; j++){
            int temp = A[i][j];
            A[i][j] = A[j][i];
            A[j][i] = temp;
        }

}
int main() {
    cin>>N;
    char dir;
    cin>>dir;
    int x, y;
    cin>>x>>y;
    int curr=1, curr_dir=1;
    for(int i=0; i<N; i++){
        if(curr_dir==1){
            int j=0;
            while(j<N){
                arr[i][j]=curr;
                curr++;
                j++;
            }
            curr_dir=2;
        }
        else{
            int j=N-1;
            while(j>=0){
                arr[i][j]=curr;
                curr++;
                j--;
            }
            curr_dir=1;
        }
    }
    if(x==0 && y==N-1){
        if(dir=='n' || dir=='s'){
            tpMatrix(arr);
        }
        
        rotateMatrix(arr);
        rotateMatrix(arr);
        rotateMatrix(arr);
    }
    else if(x==N-1 && y==0 ){
        if(dir=='s' || dir=='n' ){
            tpMatrix(arr);
        }
        rotateMatrix(arr);
    }
    else if(x==N-1 && y==N-1){
        if(dir=='e' ||  dir=='n'){
            tpMatrix(arr);
        }
        rotateMatrix(arr);
        rotateMatrix(arr);
    }
    else {
        if(dir=='w' || dir=='e'){
            tpMatrix(arr);
        }
    }
    
    for(int i=0; i<N; i++){
        for(int j=0; j<N; j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    return 0;
}

