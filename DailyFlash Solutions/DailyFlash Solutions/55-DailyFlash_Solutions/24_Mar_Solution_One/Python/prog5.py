import array
import math
num = int(input())
s = 0
arr = array.array("i", []);
for i in range(num):
    n = int(input())
    s += n
    arr.append(n);
    
avg = s / len(arr)
s = 0
for i in arr:
    s += (avg - i) * (avg - i)
d = {1:avg, 2:s/len(arr), 3:math.sqrt(s / len(arr))}
while(True):
    print("1.avg\n2.var\n3.SD\nch")
    ch = int(input())
    print(d[ch])
