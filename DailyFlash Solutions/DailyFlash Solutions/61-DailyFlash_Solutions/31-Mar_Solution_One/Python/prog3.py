import array
n = int(input())
arr = array.array("i", [])
j = 0
while(j < n):
    num = int(input())
    if(num % 2 == 1):
        arr.append(num * num * num)
    else:
        arr.append(num * num)
    j+=1

for i in arr:
    print(i)
