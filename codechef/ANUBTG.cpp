/*Dushyant Kumar Mishra
zeroonehacker
Mathematics and Computing
IIT BHU Varanasi
*/
#include<iostream>
#include<stdio.h>
#include<string>
#define ll long long int
using namespace std;
void quickSort(int arr[], int left, int right) {
      int i = left, j = right;
      int tmp;
      int pivot = arr[(left + right) / 2];

      /* partition */
      while (i <= j) {
            while (arr[i] > pivot)
                  i++;
            while (arr[j] < pivot)
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
	int T,N,i,C[1001],sum;
	cin>>T;
	while(T--){
		cin>>N;
		i=0;
		sum =0 ;
		while(i<N){
			cin>>C[i];
			i++;
		}
		quickSort(C,0,N-1);
		for(int j=0;j<N;j++)
			if(j%4 <2)sum+=C[j];
		cout<<sum<<endl;
	}
return 0;}
