#include <iostream>
#include <stdio.h>
#include <string.h>
#include <math.h>
#include <limits.h>
#include <vector>
#include <queue>
#include <stack>
#include <map>
#include <cstdlib>
#include <algorithm>
//psyduck
#define ll long long
#define S(x) scanf("%d",&x)
#define Sf(x) scanf("%f",&x)
#define Slf(x) scanf("%lf",&x)
#define Sl(x) scanf("%lld",&x)
#define P(x)  printf("%d\n", x)
#define Pf(x)  printf("%f\n", x)
#define Plf(x)  printf("%lf\n", x)
#define Pl(x)  printf("%lld\n", x)
#define mem(x,i) memset(x,i,sizeof(x))
using namespace std;
int chess[10][10],count1=0;
int rec(int level,int place[],int*N,int *M);
bool check(int level, int j,int place[]);
int main()
{
    int chess[10][10];
    int N,M;
    int i,j,x;
    int place[10];
    cin>>N>>M;
    char in;
    scanf("%c",&in);
    x = 0;
    for (i = 1; i <= N; i++){
        for (j = 1; j <= M; j++){
            scanf("%c",&in);
            if(in == '.'){
                chess[i][j] = 1;
            }
            else{
                chess[i][j] = 0;
                x = 1;
            }
        }
         scanf("%c",&in);
    }
    rec(1,place,&N,&M);
    cout<<count1;
    return 0;
}
int rec(int level,int place[],int * N,int *M)
{
    int i;
    if(level == *N+1){
        count1++;
        return 0;
    }
    for (i = 1; i <= *M; i++){
        if(chess[level][i] == 1){
            int j = i;
            int flag = 0;
            int k,p;
            for (p = level-1,k = j+1; p  >= 1 && k <= *M; p--,k++){
                    if(chess[p][k] == 0){
                        break;
                    }
                    if((level - p) == (place[p]-j)){
                       flag = 1;
                       break;
                    }
                }
            if(flag != 1){
                for (p = level-1, k = j-1; p  >= 1 && k >= 1; p--,k--){
                if(chess[p][k] == 0){
                    break;
                }
                if((level - p) == (j - place[p])){
                    flag = 1;
                    break;
                }
                }
            }
            if(flag == 0){
                place[level] = i;
                rec(level+1,place,N,M);
            }
        }
    }
    return 0;
}

