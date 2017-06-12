/*Dushyant Kumar Mishra
zeroonehacker
Mathematics and Computing
IIT BHU Varanasi
*/
#include<iostream>
#include<cstdio>
#include<cstdlib>
#include<string.h>
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
int maxsum(int a[], int s)
{
   int maxfar = a[0], i;
   int currmax = a[0];

   for (i = 1; i < s; i++)
   {
        currmax = max(a[i], currmax+a[i]);
        maxfar = max(maxfar, currmax);
   }
   return maxfar;
}

void run(){
        ll T,N,H,l,h,sui,maxf,curr;
        cin>>T;
        //scanint(T);
        while(T--){
            sui=0;maxf=0;curr=0;
            cin>>N;
            cin>>H;
            //scanint(N);
        //scanint(H);
        int A[N];
        for(int i=0;i<N;i++)A[i]=0;
        for(int i=0;i<N;i++){
        cin>>l;
        cin>>h;
        //scanint(l);
        //scanint(h);
        if(l>0){
        A[l-1]-=1;
        }
        A[h]+=1;}sui=A[N-1];
        for(int i=N-2;i>=0;i--){
        A[i]+=sui;
        sui=A[i];}
        sui=0;
        for(int i=0;i<H;i++){
        sui +=A[i];
        }
        maxf = sui;curr=sui;
        for(int i=H,j=0;i<N;i++){
        curr-=A[j];
        curr+=A[i];
        if(maxf<curr){
        maxf = curr;
        }
        j++;
        }
        cout<<(N*H)-maxf<<endl;

        }

}


int main()
{
    ll N,counting,f,strings,i,T;
    cin>>T;
    while(T--)
    {

        cin>>N;
        counting =1;
        f = 1;
        strings =2;
        for(i=1;i<=N;i++)
        {
            if(i==strings)
            {
                counting +=1 ;
                strings = i+f;
                f= i;
            }
            if(strings<=N)
            {
                i= strings-1;
            }
            else
            {
                break;
            }
        }
        cout<<counting<<endl;
    }
    return 0;

}
