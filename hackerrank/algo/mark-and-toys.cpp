#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() 
{
    long long n, k,i,s; cin >> n >> k;
    vector<int> prices;
    for(int i = 0; i < n; i++)
    {
        int p; cin >> p;
        prices.push_back(p);
    }
    sort(prices.begin(), prices.end());
    
    int answer = 0;
    for(i=0;i<n;i++)
        {
        s+=prices[i];
        if (s>k)break;
    }
    answer=i;
    // Write the code for computing the final answer using n,k,prices
    
    cout << answer << endl;
    
    return 0;
}

