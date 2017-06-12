#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;
vector<int> dumpi[1000002];
int gni[1000002],result=0,arr1[1000002],arr2[1000002],cool[1000002];
void util(int v, int p);
void quickSort(int arr[], int left, int right) {
      int i = left, j = right;
      int tmp;
      int pivot = arr[(left + right) / 2];
 
      /* partition */
      while (i <= j) {
            while (arr[i] < pivot)
                  i++;
            while (arr[j] > pivot)
                  j--;
            if (i <= j) {
                  tmp = arr[i];
                  arr[i] = arr[j];
                  arr[j] = tmp;
                  i++;
                  j--;
            }
      };
 
      /* recursion */
      if (left < j)
            quickSort(arr, left, j);
      if (i < right)
            quickSort(arr, i, right);
}
int main() {
    int T,K=0,i,X,Y;
	char cht;
	int a[10];
	quickSort(a,4,9);
    scanf("%d",&T);
    for(i=0;i<T;i++){
        cin>>cht;
        if(cht=='A'){
            cin>>X;
            gni[++K]=X;
            result =result + gni[K];
            cool[K]=1;
        }
        if(cht=='B'){
            cin>>X>>Y;
            dumpi[X].push_back(Y);
            dumpi[Y].push_back(X);
        }
        if(cht=='C'){
            cin>>X;
            util(X,-1);
            gni[++K]=max(arr1[X],arr2[X]);
            result+=gni[K];
            cool[K]=1;
        }
    }
    for(i=1;i<1000002;i++){
        if(cool[i]==1){
            util(i,-1);
            result = result + arr1[i]>arr2[i]?arr1[i]:arr2[i];
        }
    }
    cout<<result<<endl;
    return 0;
}

void util(int v, int p){
    result = result - gni[v];
    arr1[v]=0;
    arr2[v]=0;
    cool[v]=0;
    int sum1=0, sum2=0;
    for(int i=0;i<dumpi[v].size();i++){
    if(dumpi[v][i]==p) continue;
    if(cool[dumpi[v][i]]==0) continue;
    util(dumpi[v][i],v);
    sum1 += arr2[dumpi[v][i]];
    sum2 += arr1[dumpi[v][i]]> arr2[dumpi[v][i]] ? arr1[dumpi[v][i]] : arr2[dumpi[v][i]];
    }
    arr1[v] = gni[v] + sum1;
    arr2[v] = sum2;
    
}
