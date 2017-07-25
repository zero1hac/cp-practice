#include<bits/stdc++.h>
using namespace std;

int main(){
    int T;
    cin>>T;
    while(T--){
        int n;
        cin>>n;
        string s;
        cin>>s;
        int i=n-1;
        while(i>0 && s[i-1] >= s[i]) i--;

        if(i<=0){cout<<"ERROR\n";continue;}
        int j=n-1;

        while(s[j] <= s[i-1])j--;

        int temp = s[j];
        s[j] = s[i-1];
        s[i-1] = temp;
        j = n-1;

        while(i < j){
            temp = s[i];
            s[i] = s[j];
            s[j] = temp;
            j--;
            i++;
        }
        cout<<s<<endl;

    }
    return 0;
}
