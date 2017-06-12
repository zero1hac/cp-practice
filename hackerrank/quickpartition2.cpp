#include <bits/stdc++.h>
using namespace std;

#include <map>
#include <set>
#include <list>
#include <cmath>
#include <ctime>
#include <deque>
#include <queue>
#include <stack>
#include <bitset>
#include <cstdio>
#include <vector>
#include <cstdlib>
#include <numeric>
#include <sstream>
#include <iostream>
#include <algorithm>
using namespace std;
int partition(vector <int>  ar, int low, int high) {
    int temp;
    temp = ar[low];
    ar[low] = ar[high];
    ar[high] = temp;
    int p=ar[high];
    int i=low-1,j=0,t;
    //cout<<ar.size();
    while(j<high){
        if(ar[j]<=p){
            i+=1;
            t = ar[i];
            ar[i] = ar[j];
            ar[j] = t;
        }
        j++;
    }
    t = ar[i+1];
    ar[i+1] = ar[high];
    ar[high] = t;
    
    for(int _ar_i=low; _ar_i<=i; _ar_i++) {
        
       cout<<ar[_ar_i]<< " "; 
    }
    
    cout<<"\n";
    
    for(int _ar_i=i+2; _ar_i<=high; _ar_i++) {
        
       cout<<ar[_ar_i]<< " "; 
    }
    cout<<"\n";
    int n=ar.size();
    
    for(int _ar_i=0; _ar_i<=n-1; _ar_i++) {
        
       cout<<ar[_ar_i]<< " "; 
    }
    cout<<"\n";
    return i+1;
   // Enter code for partitioning and printing here. 
}

void quickSort(vector <int> &arr, int low, int high) {
   // Complete this function
    int p;
    if(low<high){
        p = partition(arr,low,high);
        quickSort(arr,low,p-1);
        quickSort(arr,p,high);
    }
    
}

int main()
{
    int n;
    cin >> n;

    vector <int> arr(n);
    for(int i = 0; i < (int)n; ++i) {
        cin >> arr[i];
    }

    quickSort(arr,0,n-1);

    return 0;
}

