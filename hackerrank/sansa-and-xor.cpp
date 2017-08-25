#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    int T;
    cin>>T;
    while(T--){
        long long int N;
        cin>>N;
        long long int count=0;
        long long int k;
        for(long long int i=0; i<N; i++){
            cin>>k;
            long long int temp = (i+1)*(N - (i+1) + 1);
            if(temp%2==1){
                count^=k;
            }
        }
        cout<<count<<endl;
    }
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    return 0;
}
