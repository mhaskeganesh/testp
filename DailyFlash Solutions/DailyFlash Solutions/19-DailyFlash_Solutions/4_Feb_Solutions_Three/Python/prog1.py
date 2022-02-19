import math
arr = [True for i in range(101)]
j = 2
while(j * j <= 100):
    if(arr[j]):
        for k in range(j * j, 101, j):
            arr[k] = False
    j += 1

for i in range(2, 101):
    if(arr[i]):
        print(i, end = " ")
    
