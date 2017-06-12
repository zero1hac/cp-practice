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
	int T,N,j,i,res;
	cin>>T;
	while(T--){
		cin>>N;
		int racks[N];
		int pies[N];
		res = 0;
		for(int i=0;i<N;i++)cin>>pies[i];
		for(int i=0;i<N;i++)cin>>racks[i];
		quickSort(racks,0,N-1);
		quickSort(pies,0,N-1);
		for (int i=0, j = 0; i < N  && j < N; i++) {
			while (j < N && pies[i] > racks[j])
				j++;
			if (j < N) {
				res++;
				j++;
			}
		}
		cout<<res<<endl;
}				
		

return 0;}
