/*Dushyant Kumar Mishra
zeroonehacker
Mathematics and Computing
IIT BHU VARANASI
*/
#include<iostream>
#include<cstdio>
#include<cstdlib>
#include<algorithm>
#include<limits.h>
#define SIZE 100
#define gc getchar_unlocked
using namespace std;
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
class BigInt{
	int num[SIZE];
	public:
		BigInt operator * (BigInt& x){
			BigInt tor;
			int temp=0;
			int mat[2*SIZE+1][2*SIZE] = {0};
			for(int i=SIZE-1;i>=0;i--){
				for(int j=SIZE-1;j>=0;j--){
					temp += num[i]*x.num[j];
					if(temp < 10){
						mat[i][j-(SIZE-1-i)] = temp;
						temp =0;
					}
					else{
						mat[i][j-(SIZE-1-i)] = temp%10;
						temp = temp/10;
					}
				}
			}
			for(int i=1;i<SIZE-1;i++){
				for(int j=SIZE-1;j>=0;j--){
					temp+=mat[i][j] + mat[i-1][j];
					if(temp < 10){
						mat[i][j] = temp;
						temp =0 ;
						}
					else{
						mat[i][j] = temp%10;
						temp = temp/10;
					}
				}
			}
			for(int i=0;i<SIZE;i++){
				tor.num[i] = mat[SIZE][i];
				return tor;
			}
			}
		BigInt (){
			for(int i=0;i<SIZE;i++){
				num[i] = 0;
			}
		}
		BigInt (string _num){
				for(int i=0;i<SIZE;i++)num[i] = 0;
				int j= SIZE-1;
				for(int i=_num.length()-1;i>=0;i--,j--){
					num[j] = _num[i] - '0';
				}
			}
		void print(){
			int start = 0;
			for(int i=0;i<SIZE;i++)
			{
				if(num[i]!=0){
					start = i;
					break;
					}
			}
			for(int i=start;i<SIZE-1;i++)

			cout<<num[i];
			cout<<endl;
			return;
		}
		};
unsigned int gcd(unsigned int u,unsigned int v){
	int shift;
	if(u == 0) return v;
	if(v == 0) return u;
	shift = __builtin_ctz(u | v);
	u >>= __builtin_ctz(u);
	do{
		v >>= __builtin_ctz(v);
		if(u > v){
			unsigned int t = v;
			v = u;
			u = t;
		}
		v = v-u;
		}while(v !=0);
		return u<<shift;
	}
void quickSort(int arr[], int left, int right) {
      int i = left, j = right;
      int tmp;
      int pivot = arr[(left + right) / 2];

      /* partition */
      while (i <= j) {
            while (arr[i] < pivot)
                  i++;
            while (arr[j] > pivot)
                  j--;
            if (i <= j) {
                  tmp = arr[i];
                  arr[i] = arr[j];
                  arr[j] = tmp;
                  i++;
                  j--;
            }
      };

      /* recursion */
      if (left < j)
            quickSort(arr, left, j);
      if (i < right)
            quickSort(arr, i, right);
}
int main()
{
    int T;
    int left,i,f,f2,string1,string2,minjump;
    int a[10]={1,2,3,4,5,6,7,8,9,10};
    scanint(T);
quickSort(a,0,9);
quickSort(a,0,9);
    while(T--)
    {
        string1=0;
        string2=0;
        minjump =0;
        string length1,length2;
        cin>>length1;
        cin>>length2;
        left = length1.length();
        if(length1[left-1]=='#'&&length2[left-1]=='#')
        {
            cout<<"No"<<endl;
        }
        else
        {
            f = 1;
            f2 =2;
            for(i=0; i<left; i++)
            {
                if(i+1!=left)
                {
                    if(length1[i+1]=='#'&&length2[i+1]=='#')
                    {
                        cout<<"No"<<endl;
                        f=-1;
                        break;
                    }
                }
                if(length1[0]=='#')
                {
                    f =5;
                    break;
                }
                if(i)
                {
                    if(f==1)
                    {
                        if(length1[i]=='#')
                        {
                            if(length2[i-1]=='.')
                            {
                                i--;
                                string1++;
                                f = 2;
                            }
                            else if(length2[i]=='.')
                            {
                                string1++;
                                f= 2;
                            }
                            else
                            {
                                string1  =INT_MAX;
                                f= 3;
                                break;
                            }
                        }
                    }
                    else
                    {
                        if(length2[i]=='#')
                        {
                            if(length1[i-1]=='.')
                            {
                                i--;
                                string1++;
                                f= 1;
                            }
                            else if(length1[i]=='.')
                            {
                                string1++;
                                f=1;
                            }
                            else
                            {
                                string1  =INT_MAX;
                                f = 3;
                                break;
                            }
                        }
                    }
                }
            }
            for(i=0; i<left; i++)
            {
                if(f==-1)
                {
                    break;
                }
                if(length2[0]=='#')
                {
                    f2 =6;
                    break;
                }
                if(i)
                {
                    if(f2==2)
                    {
                        if(length2[i]=='#')
                        {
                            if(length1[i-1]=='.')
                            {
                                i--;
                                string2++;
                                f2 = 1;
                            }
                            else if(length1[i]=='.')
                            {
                                string2++;
                                f2 = 1;
                            }
                            else
                            {
                                string2  =INT_MAX;
                                f2 = 4;
                                break;
                            }
                        }
                    }
                    else
                    {
                        if(length1[i]=='#')
                        {
                            if(length2[i-1]=='.')
                            {
                                i--;
                                string2 ++;
                                f2 = 2;
                            }
                            else if(length2[i]=='.')
                            {
                                string2++;
                                f2 = 2;
                            }
                            else
                            {
                                string2  =INT_MAX;
                                f2 = 4;
                                break;
                            }
                        }
                    }
                }
            }

            if(f!=-1)
            {

            if(f==3&&f2==4)
            {
                cout<<"No"<<endl;


            }
            else if(f==3&&f2==6)
            {
                cout<<"No"<<endl;
            }
            else if(f2==4&&f==5)
            {
                cout<<"No"<<endl;

            }
            else
            {

                if(f2==6&&f!=5)
                {
                    minjump = string1;
                    cout<<"Yes"<<endl<<minjump<<endl;

                }
                else if(f==5&&f2!=6)
                {
                    minjump=string2;
                    cout<<"Yes"<<endl<<minjump<<endl;                }

                else
                {

                    minjump = string1>string2?string2:string1;
                    if((f==5)&&(f2==6))
                    {
                        cout<<"No"<<endl;                    }

                    else
                    {
                        cout<<"Yes"<<endl<<minjump<<endl;


                    }


                }
            }
            }
        }
    }
    return 0;
}
