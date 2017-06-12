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
void partition(vector <int>  ar) {
    int p=ar[0];
    int i=-1,j=0,t;
    while(j<ar.size()){
        if(ar[j]<p){
            i+=1;
            t = ar[i];
            ar[i] = ar[j];
            ar[j] = t;
        }
        j++;
    }
    int _ar_size=ar.size();
    for(int _ar_i=0; _ar_i<_ar_size; _ar_i++) {
        
       cout<<ar[_ar_i]<< " "; 
    }
   // Enter code for partitioning and printing here. 
}
int main(void) {
   vector <int>  _ar;
   int _ar_size;
   cin >> _ar_size;
    
     for(int _ar_i=0; _ar_i<_ar_size; _ar_i++) {
        int _ar_tmp;
        cin >> _ar_tmp;
        _ar.push_back(_ar_tmp); 
    }

   partition(_ar);
   
   return 0;
}

