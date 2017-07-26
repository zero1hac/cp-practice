#include<bits/stdc++.h>
using namespace std;

int main(){
    int arr[256];
    memset(arr, 0, sizeof(arr));
    arr[0]=0;
    //arr[1]=1;
    for(int i=1; i<256; i++){
        for(int j=i; j<256; j+=(i+1)){
            if(i!=j)
            arr[j]=1;
        }
    }
    //for(int i=0; i<256; i++){
      //  cout<<arr[i]<<" ";
    //}return 0;
    int T;
    cin>>T;
    while(T--){
        int N;
        cin>>N;
        string s;
        cin>>s;
        for(int i=0; i<N; i++){
            if(!arr[s[i]-1]){
                cout<<s[i];
                continue;
            }
            else{
                char low=s[i];
                char high=s[i];
                while(high<256){
                    if(!arr[high-1])break;
//                    cout<<"chala\n";
                    high++;
                }
                while(low>=0){
                    if(!arr[low-1])break;
  //                  cout<<"chala low\n";
                    low --;
                }
                if(s[i]-low > high - s[i]){
                    //char h = high;
                    char h =(char)(s[i] + (high - s[i]));
    //                cout<<"l";
                    cout<<h;
                }
                else{
                    //char t = low;
                    char t = s[i] - (s[i] - low);
                    cout<<t;

                }

            }
          //  cout<<endl;
        }
        cout<<endl;
    }
return 0;
}
