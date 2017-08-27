#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    int q, n;
    cin>>q;
    while(q--){
        int n;
        cin>>n;
        vector<int> boxes(n), types(n);
        for(int i=0; i<n; i++){
            for(int j=0; j<n; j++){
                int temp;
                cin>>temp;
                boxes[i]+=temp;
                types[j]+=temp;
            }
        }
        string result = "Possible\n";

        for(int i=0; i<n; i++){

            int j=0;
            for(j=i; j<n; j++){
                if(boxes[i] == types[j]){
                    int temp = types[j];
                    types[j] = types[i];
                    types[i] = temp;
                    break;
                }
            }
            if(j==n){
                result="Impossible\n";
                break;
            }
        }
        cout<<result;
    }

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    return 0;
}
