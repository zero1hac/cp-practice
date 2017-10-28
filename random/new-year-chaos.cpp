#include <bits/stdc++.h>

using namespace std;

void minimumBribes(vector<int> q)
{
    int ans = 0;
    for (int i = q.size() - 1; i >= 0; i--) {
        if (q[i] - (i + 1) > 2) {
            cout << "Too chaotic" << endl;
            return;
        }
        for (int j = max(0, q[i] - 2); j < i; j++)
            if (q[j] > q[i]) ans++;
    }
    cout << ans << endl;
}

int main() {
    int t;
    cin >> t;
    for(int a0 = 0; a0 < t; a0++){
        int n;
        cin >> n;
        vector<int> q(n);
        for(int q_i = 0; q_i < n; q_i++){
           cin >> q[q_i];
        }
        minimumBribes(q);
    }
    return 0;
}

