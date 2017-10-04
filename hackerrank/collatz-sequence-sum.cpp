
int collatzSequenceLen(int n) {
    if (n == 0) {
        return 0;
    }
    if (n == 1) {
        return 1;
    }
    if (n % 2 == 0) {
        return 1 + collatzSequenceLen(n/2);
    }
    return 1 + collatzSequenceLen(3*n+1);
}

int collatzSequenceSum(int T, int A, int B) {
    int n = 0;
    int arr[5004];
    arr[0] = 0;
    for (int k = 1; k <= 5003; ++k) {
            arr[k] = collatzSequenceLen(k);
        }
    int best_len = 0;
    int best_num = 0;
    for(int i=0;i<=5003; i++){
        int cur_len = arr[i];
        if (cur_len >= best_len) {
                best_len = cur_len;
                best_num = i;
                arr[i] = i;
          }
        else{
            arr[i] = best_num;
        }
    }
    int result = 0;
    while (T--) {
        n = (A*n + B) % 5003;    
        result += arr[n];
    }
    return result;
}

