/*Dushyant Kumar Mishra
zeroonehacker
Mathematics and Computing
IIT BHU Varanasi
*/
#include<iostream>
#include<stdio.h>
#include<string>
#include<math.h>
#define gc getchar_unlocked
using namespace std;
void scanint(long long int &x)
{
    register long long int c = gc();
    x = 0;
    for(;(c<48 || c>57);c = gc());
    for(;c>47 && c<58;c = gc()) {x = (x<<1) + (x<<3) + c - 48;}
}
void scanint1(int &x)
{
    register int c = gc();
    x = 0;
    for(;(c<48 || c>57);c = gc());
    for(;c>47 && c<58;c = gc()) {x = (x<<1) + (x<<3) + c - 48;}
}
void quickSort(long long int arr[], int left, int right) {
      int i = left, j = right;
      int tmp;
      long long int pivot = arr[(left + right) / 2];
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
      if (left < j)
            quickSort(arr, left, j);
      if (i < right)
            quickSort(arr, i, right);
}

int main(){
	int T,N;
	long long int S[100000],sum;
	scanint1(T);
	while(T--){
		scanint1(N);
		sum =0 ;
		for(int i=0;i<N;i++)scanint(S[i]);
		quickSort(S,0,N-1);
		for(int i=1;i<=N;i++){//cout<<S[i-1]<<sum<<endl;//cout<<S[i]*(pow(2,i)-pow(2,N-i))<<endl;
			sum+=S[i-1]*(long long int)(pow(2,i-1)-pow(2,N-i));}
		printf("%lld\n",sum);
		}
	return 0;
	}
		
	

