#include<bits/stdc++.h>
#define ll long long
#define pb push_back

using namespace std;
int arr[1000005];
void sieve(){
    memset(arr, 1, sizeof(arr));
    arr[0] = 0;
    arr[1]=0;
    for(int i=2; i<1000005; i++){
        if(arr[i]){
            for(int j=2*i; j<1000005; j+=i){
                arr[j]=0;
            }
        }
    }
    //cout<<"completed\n";
}
int main()
 {
     int T;
     cin>>T;
     sieve();
     vector<int> primes;
     for(int i=2; i<1000005; i++){
         if(arr[i]){
             primes.push_back(i);
         }
     }
     while(T--){
         int N;
         cin>>N;
         int low=0;
         int high;
         //cout<<primes[0]<<" "<<primes[1]<<endl;
         for(int i=0; i<primes.size(); i++){
             if(primes[i]>N){
               //cout<<"found\n";
                 high = i;
                 break;
             }
         }
         while(low <= high){
             //cout<<low<<" "<<high<<endl;
             if(primes[low] + primes[high] == N){
                 cout<<primes[low]<<" "<<primes[high]<<endl;
                 break;
             }
             if(primes[low]+primes[high] > N){
                 high--;

             }
             else if(primes[low] + primes[high] < N){
                 low++;
             }
         }
         if(low>high){
             cout<<"-1\n";
         }

     }
	//code
	return 0;
}
