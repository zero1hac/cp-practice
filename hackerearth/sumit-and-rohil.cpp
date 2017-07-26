#include<bits/stdc++.h>
#define MOD 1000000007
using namespace std;
template <typename T>
T modpow(T base, T exp, T modulus) {
      base %= modulus;
        T result = 1;
        while (exp > 0) {
            if (exp & 1) result = (result * base) % modulus;
                base = (base * base) % modulus;
                    exp >>= 1;
                 }
            return result;
}

int main(){
    int N;
    cin>>N;
    int count=0;
    map<long long, vector<pair<char, char> > > has; 
    while(N--){
        string s;
        cin>>s;
        long long val = 0;
        char first = s[0];
       // int count =0 ;
        char second = s[s.length()-1];
        //cout<<first<<" "<<second<<endl;
        sort(s.begin(), s.end());
        for(int i=0; i<s.length(); i++){
            val += ((s[i]%MOD)*modpow(31, i, MOD))%MOD;
        }
        auto it = has.find(val);
        //cout<<"val "<<val<<endl;
        if(it != has.end()){
            auto vec = (*it).second;
            int flag=0;
            for(int i=0; i<vec.size(); i++){
                if(vec[i].first == first && vec[i].second == second)
                    flag=1;

            }
            if(!flag){
                (it->second).push_back(make_pair(first, second));
                count++;
                //cout<<"Not found"<<endl;
            }

        }
        else{
            vector<pair<char, char> > newvec;
            newvec.push_back(make_pair(first, second));
            has[val] = newvec;
            count++;
          // cout<<"New val\n";
        }

    }
//    printf("%d", count);
   cout<<count<<endl;
    return 0;
}
