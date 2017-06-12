import pandas as pd
import numpy as np

df = pd.read_csv("trainingdata.txt", sep=",", header=None)
df.columns = ["x","y"]
m, c = np.polyfit(df["x"], df["y"], 1)
num = float(raw_input())

print "%0.2f" % (num*m + c,)

#print df
