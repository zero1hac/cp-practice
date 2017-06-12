/*Dushyant Kumar Mishra
zeroonehacker
Mathematics and Computing
IIT BHU Varanasi
*/
#include<bits/stdc++.h>
#define ll long long
using namespace std;
#define gc getchar_unlocked

void scanint(int &x)
{
    register int c = gc();
    x = 0;
    for(;(c<48 || c>57);c = gc());
    for(;c>47 && c<58;c = gc()) {x = (x<<1) + (x<<3) + c - 48;}
}
int main()
{
    ll n,k,i,j;
    cin>>n>>k;
    ll arr[n+5],val=0;
    for(i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    for(i=0;i<n-1;i++)
    {
        for(j=i+1;j<n;j++)
        {
            if(arr[i]%arr[j]==k)
            {
                val=val+(n-j+1);
                break;
            }
        }
    }
    ll a=(ll)(n*(n+1))/2;
    cout<<a-val<<endl;
    return 0;
}
