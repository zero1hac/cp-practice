/*Dushyant Kumar Mishra
zeroonehacker
IIT BHU Varanasi
Mathematics and Computing
*/
#include<iostream>
#include<cstdio>
#include<math.h>
#include<cstdlib>
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
    int T;
    cin>>T;
    while(T--)
    {
        long count=0,first,second,temp,code;
        cin>>first>>second;
        if(first!=second)
        {
        while(1)
        {
        if( (first & (first-1))==0 )
        {
           
            count +=fabs((log2(second)-log2(first)));
            break;
        }
        else
        {
            if(first==1)
            {
                first  = first*2;
                count++;
            }
            else if(first%2==0)
            {
                first = (first)/2;
                count++;
            }
            else
            {
                first = (first-1)/2;
                count++;
            }
        }
        }
        }
        
        cout<<count<<endl;
    }
    return 0;
}
