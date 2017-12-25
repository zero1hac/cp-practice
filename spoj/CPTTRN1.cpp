#include<bits/stdc++.h>
using namespace std;

int main(){
    int T;
    cin>>T;
    while(T--){
        int l,c;
        cin>>l>>c;
        char a[2];
        a[0] = '*';
        a[1] = '.';
        int inner=0, outer=1;
        for(int i=0; i<l; i++){
            inner = 1 - outer;
            for(int j=0; j<c; j++){
                cout<<a[inner];
                inner = 1 - inner;
            }
            outer = 1 - outer;
            cout<<endl;
        }
    }
    return 0;
}
