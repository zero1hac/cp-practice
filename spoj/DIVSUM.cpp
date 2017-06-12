/*Dushyant Kumar Mishra
zeroonehacker
Mathematics and Computing
IIT BHU Varanasi
*/
#include<bits/stdc++.h>
using namespace std;
int main(){
    long long int i=1,T,N,sum,K;
    cin>>T;
    while(T--){
        scanf("%lld",&N);
        K = sqrt(N);
        i=2;
        sum=0;
        if (N==1)cout<<"0\n";
        else{
                while(i<=K){
                    if(N%i==0){
                            if(i==N/i)sum+=i;
                            else sum+=i+N/i;
                            }
                        i++;}
                sum++;
                cout<<sum<<endl;
            }
        }
    return 0;
}
