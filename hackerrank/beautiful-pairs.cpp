#include<bits/stdc++.h>
using namespace std;


int main() {

    int N;

    cin>>N;
    vector<int> arr(N);
    for(int i=0; i<N; i++){
        cin>>arr[i];
    }
    multiset<int> mul;
    for(int i=0; i<N; i++){
        int k;
        cin>>k;
        mul.insert(k);
    }
    int ans=0;
    for(int i=0; i<N; i++)
    {
        auto it = mul.find(arr[i]);
        if(it == mul.end()){
            continue;
        }
        else{
            ans++;
            mul.erase(it);
        }
    }

    if((int)mul.size() == 0){
        --ans;
    }
    else{
        ++ans;
    }
    cout<<ans<<endl;
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    return 0;
}
#include<bits/stdc++.h>
using namespace std;


int main() {

    int N;

    cin>>N;
    vector<int> arr(N);
    for(int i=0; i<N; i++){
        cin>>arr[i];
    }
    multiset<int> mul;
    for(int i=0; i<N; i++){
        int k;
        cin>>k;
        mul.insert(k);
    }
    int ans=0;
    for(int i=0; i<N; i++)
    {
        auto it = mul.find(arr[i]);
        if(it == mul.end()){
            continue;
        }
        else{
            ans++;
            mul.erase(it);
        }
    }

    if((int)mul.size() == 0){
        --ans;
    }
    else{
        ++ans;
    }
    cout<<ans<<endl;
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    return 0;
}
