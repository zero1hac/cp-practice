import numpy as np

arr1 = np.array(map(int, raw_input().strip().split()))
arr2 = np.array(map(int, raw_input().strip().split()))

print np.corrcoef(arr1, arr2)[0, 1]
