#include<iostream>
#include<cmath>
using namespace std;
int main() {
    int T;
    cin >> T;
    while(T--) {
        int N, M; 
        cin >> N >> M;
        int Arr[N + 1];
        for(int i = 0;i < N + 1;i++) Arr[i] = 0;
        int L = 1, R = N;
        int x = 0, deg = 0;
        for(int i = 1;i < M;i += 2) {
            if(L != R && Arr[L] == 0 && Arr[R] == 0) {
                Arr[L]++; Arr[L]++;
                L++;R--;
                deg = 0; x = R + 1;
                continue;
            }
            if(L > int(ceil(N/2.0))) {
             	L = 1;
            }
            if(L == R) {
            	R = N;
            }
            Arr[L]++;
            L++;
            
            if(R < int(ceil(N/2.0))) {
            	R = N;
            }
            Arr[R]++;
            R--;
            x = R; deg = Arr[R + 1] - 1;
        }
        if(M% 2) {
            if(L > int(ceil(N/2.0))) {
             	L = 1;
            }
            if(L == R) {
            	R= N;
            }
            Arr[L]++;
            L++;

            deg = Arr[L];
            x = L;
        }
        cout << x << " " << deg << endl;
    }
    return 0;               
}
       
                                  
