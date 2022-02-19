import array
n = int(input())
arr = array.array("i", [])
j = 0
while(j < n):
    num = int(input())
    arr.append(num)
    j+=1

for i in arr:
    
    print(i*i, end = " ")
