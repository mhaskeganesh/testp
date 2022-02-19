from array import *

arr = array('i', [])
n = int(input("Length : "))
for i in range(n):
    arr.append(int(input()))

for i in range(n):
    print(arr[n - 1 - i],end = " ")
