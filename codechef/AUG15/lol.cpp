/*Dushyant Kumar Mishra
zeroonehacker
Mathematics and Computing
IIT BHU Varanasi
*/
#include<bits/stdc++.h>
#define ll long long
using namespace std;
#define gc getchar_unlocked

void scanint(long long int &x)
{
    register long long int c = gc();
    x = 0;
    for(;(c<48 || c>57);c = gc());
    for(;c>47 && c<58;c = gc()) {x = (x<<1) + (x<<3) + c - 48;}
}
int main()
{

    ll n,k,i,j,x;
    //cin>>n>>k;
    //scanf("%lld",&n);
    scanint(n);scanint(k);
    //scanf("%lld",&k);
    ll arr[n+5],A[n+5],val=0;
    for(i=0;i<n;i++)
    {
        //scanf("%lld",&arr[i]);
        scanint(arr[i]);
    }
    for(i=0;i<n;i++)
    {

        for(j=i+1;j<n;j++)
        {
            if(arr[i]%arr[j]==k)
            {
                break;
            }
        }
        A[i]=j;

    }
    for(i=0;i<n;i++){
            x = *min_element(A+i,A+n);
            if(A[i]>x){
                A[i]=x;

            }
            val+=A[i]-i;
    }
    //ll a = (ll)(n*(n+1))/2;
    printf("%lld\n",val);
    return 0;
}
