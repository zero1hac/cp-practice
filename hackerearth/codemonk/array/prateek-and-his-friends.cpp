#include <iostream>
using namespace std;

bool subsumexist(long long int a[],long long int N,long long int K){
                long long int curr_sum = a[0],start=0;
                for(long long int i=1;i<N;i++){
                        while(curr_sum > K && start < i-1){
                                curr_sum = curr_sum - a[start];
                                start ++;
                                }
                        if(curr_sum == K ) return true;
                        if(i<N)curr_sum+=a[i];
                        }
                return false;
                }

int main()
{
   int T;
   cin>>T;
   while(T--){
   	long long int N,X,temp;
   	cin>>N>>X;
   	long long int a[N];
   	for(long long int i=0;i<N;i++){cin>>temp;a[i]=temp;}
   	if(subsumexist(a,N,X))cout<<"YES"<<endl;
   	else cout<<"NO"<<endl;
   	
   }
   return 0;
}

