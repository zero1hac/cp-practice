/*Dushyant Kumar Mishra
zeroonehacker
Mathematics and Computing 
IIT BHU Varanasi
Thanks to Abhisar blog for FASTIO*/
#include <bits/stdc++.h>
#include<cstdio>
//#define gc getchar_unlocked
using namespace std;
int gcd (int num1, int num2) {
	return num2 ? gcd (num2, num1 % num2) : num1;
}
//void scanint(int &x)
//{
  //  register int c = gc();
    //x = 0;
    //for(;(c<48 || c>57);c = gc());
    //for(;c>47 && c<58;c = gc()) {x = (x<<1) + (x<<3) + c - 48;}
//}
void quickSort(int arr[], int left, int right) {
      int i = left, j = right;
      int tmp;
      int pivot = arr[(left + right) / 2];
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
int main()
{
    long long int N,temp,length=0;
    multiset<long long int> gcdtab;
    multiset<long long int>::iterator itr;
    vector<long long int> arr;
    cin>>N;
    for(long long int i=0;i<N*N;i++)
    {
        cin>>temp;
        gcdtab.insert(temp);
    }
    while(!gcdtab.empty())
    {
        arr.push_back(*gcdtab.rbegin());
        length=arr.size();
        gcdtab.erase(gcdtab.find(arr[length-1]));
        for(long long int i=0;i<2;i++)
        {
            for(long long int j=0;j<arr.size()-1;j++)
        {
            itr=gcdtab.find(gcd(arr[j],arr[length-1]));
            if(itr!=gcdtab.end())
                gcdtab.erase(itr);
            }
        }
    }
    for(long long int i=0;i<arr.size();i++)
    {
        cout<<arr[i]<<" ";
    }
	return 0;
}

