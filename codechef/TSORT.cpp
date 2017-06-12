/*Dushyant Kumar Mishra
zeroonehacker
Mathematics and Computing
IIT BHU Varanasi
*/
#include<iostream>
#include<stdio.h>
#include<string>
#include<cstdio>
#define gc getchar_unlocked
using namespace std;
void scanint(long long int &x)
{
    register long long int c = gc();
    x = 0;
    for(;(c<48 || c>57);c = gc());
    for(;c>47 && c<58;c = gc()) {x = (x<<1) + (x<<3) + c - 48;}
}

void quickSort(long long int arr[],long long int left,long long int right) {
      long long int i = left, j = right;
      long long int tmp;
      long long int pivot = arr[(left + right) / 2];

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

int main(){
	long long int T,i;
	long long int a[T];
	cin>>T;
	for(i=0;i<T;i++)scanf("%lld",&a[i]);
	quickSort(a,0,T-1);
	for(i=0;i<T;i++)printf("%lld\n",a[i]);

return 0;}
