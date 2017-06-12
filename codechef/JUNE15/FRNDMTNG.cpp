/*Dushyant Kumar Mishra
zeroonehacker
Mathematics and Computing 
IIT BHU Varanasi
*/
#include <iostream>
#include <cstdio>
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
	double lol1,lol2,LOL1,LOL2,result;
	scanint(T);
	while(T--)
	{
		
		scanf("%lf",&LOL1);
		scanf("%lf",&LOL2);
		scanf("%lf",&lol1);
		scanf("%lf",&lol2);
		if(lol1==0 && lol2==0)
		{
			if(LOL1==0 && LOL2==0)
			printf("%lf\n", 1.000000 );
			else
			printf("%lf\n", 0.000000 );
		}
	
		else {
			if(lol1>=LOL1 && lol2>=LOL2)
			printf("%lf\n", 1.000000 );
			else
			{
				result = 1.000000 - (1.0/(LOL1-lol1+1))*(1.0/(LOL2-lol2+1));
				
				printf("%.6lf\n",result);
		}
		}
	}
	return 0;
}
