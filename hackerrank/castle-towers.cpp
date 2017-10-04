int castleTowers(int n, vector <int> ar) {
    sort(ar.rbegin(), ar.rend());
    int maxi = ar[0];
    int cnt = 1;
    for (int i = 1; i < n; i++) {
        if (maxi == ar[i]) {
            cnt += 1;
        } else {
            break;
        }
    }
    return cnt;
}
