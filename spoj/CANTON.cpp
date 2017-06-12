#include<cstdio>
#include<math.h>
#include<iostream>
using namespace std;
int main()
{
    int Test_case;
    scanf("%d",&Test_case);
    while(Test_case--)
    {
        int i,Num,sums=0;
        scanf("%d",&Num);
        for(i=1;;i++)
        {
            sums+=i;
            if(sums>=Num)
                break;
        }
        int temp=Num-(sums-i);
        int total=i+1;
        if(i%2==0)
            printf("TERM %d IS %d/%d\n",Num,temp,total-temp);
        else
            printf("TERM %d IS %d/%d\n",Num,total-temp,temp);
    }
    return 0;
}
