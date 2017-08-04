#include<bits/stdc++.h>
using namespace std;
void swap(int* a, int* b)
{
    int t = *a;
    *a = *b;
    *b = t;
}
int partition (int arr[], int low, int high)
{
    int pivot = arr[high];    // pivot
    int i = (low - 1);  // Index of smaller element

    for (int j = low; j <= high- 1; j++)
    {
        // If current element is smaller than or
        // equal to pivot
        if (arr[j] <= pivot)
        {
            i++;    // increment index of smaller element
            swap(&arr[i], &arr[j]);
        }
    }
    swap(&arr[i + 1], &arr[high]);
    return (i + 1);
}

/* The main function that implements QuickSort
 arr[] --> Array to be sorted,
  low  --> Starting index,
  high  --> Ending index */
void quickSort(int arr[], int low, int high)
{
    if (low < high)
    {
        /* pi is partitioning index, arr[p] is now
           at right place */
        int pi = partition(arr, low, high);

        // Separately sort elements before
        // partition and after partition
        quickSort(arr, low, pi - 1);
        quickSort(arr, pi + 1, high);
    }
}
int main()
{
  int tr[] = {1,2,3,4,5,1,2,3,4};
  quickSort(tr,0,5);
  int row,height;
  cin>>row>>height;
  vector<string>input;
  string s1;
  for(int i=0;i<row;i++)
  {
    cin>>s1;
    input.push_back(s1);
  }
  int a1=-1;
  int a2=-1;
  vector<char>c1;
  for(int i=0;i<row;i++)
  {
    for(int j=1;j<height;j++)
    {
      if(input[i][j]!=input[i][j-1])
      {
        a1 = 0;
        break;
      }
    }

    if(a1==0)
    {
      break;
    }
    c1.push_back(input[i][0]);
  }
  if(a1!=0)
  {
    map<char,int>mr;
    mr['R']=0;
    mr['G']=0;
    mr['B']=0;
    int tot =1;
    vector<int>strips1;
    for(int i=0;i<c1.size()-1;i++){
      if(c1[i]=='R')mr['R']++;
      if(c1[i]=='G')mr['G']++;
      if(c1[i]=='B')mr['B']++;
      if(c1[i]==c1[i+1])tot++;
      else{
        strips1.push_back(tot);
        tot=1;
      }
    }
    mr[c1[c1.size()-1]]++;
    strips1.push_back(tot);
    if(mr['R']&&mr['G']&&mr['B'])
    {
      if(strips1.size()==3)
      {
        if(strips1[0]==strips1[1] && strips1[1]==strips1[2])
        {
          cout<<"YES"<<endl;
          return 0;
        }
      }
    }

  }

  c1.clear();
  for(int j=0;j<height;j++)
  {
    for(int i=1;i<row;i++)
    {
      if(input[i][j]!=input[i-1][j])
      {
        a2 = 0;
        break;
      }
    }

    if(a2==0)
    {
      break;
    }
    c1.push_back(input[0][j]);
  }
  if(a2!=0)
  {
    map<char,int>mr;
    mr['R']=0;
    mr['G']=0;
    mr['B']=0;
    int tot =1;
    vector<int>strips1;
    for(int i=0;i<c1.size()-1;i++){
      if(c1[i]=='R')mr['R']++;
      if(c1[i]=='G')mr['G']++;
      if(c1[i]=='B')mr['B']++;
      if(c1[i]==c1[i+1])tot++;
      else{
        strips1.push_back(tot);
        tot=1;
      }
    }
    mr[c1[c1.size()-1]]++;
    strips1.push_back(tot);
    if(mr['R']&&mr['G']&&mr['B'])
    {
      if(strips1.size()==3)
      {
        if(strips1[0]==strips1[1] && strips1[1]==strips1[2])
        {
          cout<<"YES"<<endl;
          return 0;
        }
      }
    }
  }

cout<<"NO"<<endl;
return 0;


}
