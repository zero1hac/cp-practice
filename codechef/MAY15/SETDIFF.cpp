#include <bits/stdc++.h>
 
using namespace std;
 
long long int a[100000],b[100000];
int main()
{
    int t,n;
   long long int p,i,j,h,sum,l,u;
scanf("%d",&t);
while(t--)
{
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
h=1<<n;
sum=0;
p=0;
for(i=0;i<h;i++)
{
    b[100000]={0};
    l=0;
    for(j=0;j<n;j++)
    {
        if(i&(1<<j))
            {
         b[l]=a[j];
         l++;
            }
    }
    /*for(u=0;u<l;u++)
    {
        printf("%d",b[u]);
    }*/
 //   printf("\n");
    sort(b,b+l);
    /*if(l==1)
    {
    sum=sum+b[0];
        printf("&&%d\n",b[0]);
    }*/
if(l!=0)
             p=b[l-1]-b[0];
 
    //printf("^^%d\n",p);
    sum=(sum+p)%(1000000000+7);
}
printf("%d\n",sum);
    }
 
    return 0;
}
