import array
n = int(input())
arr = array.array("i", [])
j = 0
while(j < n):
    num = int(input())
    arr.append(num)
    j+=1
mul = 1
for i in arr:
    if(i % 2==1):
        mul *= i
print(mul)
