#include<bits/stdc++.h>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    unordered_map<int, vector<pair<int, string> > > m;

    int N;
    cin>>N;
    int i=0;
    set<int> A;
    vector<int> vec;
    while(i<N){
        int tempnum;
        string tempstring;
        cin>>tempnum;
        cin>>tempstring;
        if(m.find(tempnum) == m.end()){
            vector<pair<int, string> > vec;
            m[tempnum] = vec;
        }
        A.insert(tempnum);
        //vec.push_back(tempnum);
        m[tempnum].push_back(make_pair(i, tempstring));
        i++;
    }
    for(auto it = A.begin(); it!=A.end(); it++){
        vec.push_back((*it));
    }
    sort(vec.begin(), vec.end());
    for(auto it = vec.begin(); it!=vec.end(); it++){

        auto tvec = m[(*it)];
        for(auto it2 = tvec.begin(); it2!=tvec.end(); it2++){
            int pos = (*it2).first;
            string cstring1 = (*it2).second;
            if(pos >= N/2)cout<<cstring1<<" ";
            else{
                cout<<"- ";
            }
        }
    }
    return 0;
}
