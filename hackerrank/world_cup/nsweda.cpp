#include<bits/stdc++.h>
#define gc getchar_unlocked
using namespace std;
void scanint(int &x)
{
    register int c = gc();
    x = 0;
    for(;(c<48 || c>57);c = gc());
    for(;c>47 && c<58;c = gc()) {x = (x<<1) + (x<<3) + c - 48;}
}
int board[10][10];
int N,M;
int count1=0;
int chess(int l,int position[]);
int main()
{
    int i,j,x;
    int position[10];
    scanint(N);
    scanint(M);
    //count1=0;
    char in;
    scanf("%c",&in);
    x = 0;
    for (i = 1; i <= N; i++){
        for (j = 1; j <= M; j++){
            scanf("%c",&in);
            if(in == '.'){
                board[i][j] = 1;
            }
            else{
                board[i][j] = 0;
                x = 1;
            }
        }
         scanf("%c",&in);
    }
    chess(1,position);
    printf("%d",count1);
    return 0;
}
int chess(int l,int position[])
{
    int i;
    if(l == N+1){
        count1++;
        return 0;
    }
    for (i = 1; i <= M; i++){
        if(board[l][i] == 1){
            int j = i;
            int flag = 0;
            int k,p;
            for (p = l-1,k = j+1; p  >= 1 && k <= M; p--,k++){
                    if(board[p][k] == 0){
                        break;
                    }
                    if((l - p) == (position[p]-j)){
                       flag = 1;
                       break;
                    }
                }
            if(flag != 1){
                for (p = l-1, k = j-1; p  >= 1 && k >= 1; p--,k--){
                if(board[p][k] == 0){
                    break;
                }
                if((l - p) == (j - position[p])){
                    flag = 1;
                    break;
                }
                }
            }
            if(flag == 0){
                position[l] = i;
                chess(l+1,position);
            }
        }
    }
    return 0;
}
