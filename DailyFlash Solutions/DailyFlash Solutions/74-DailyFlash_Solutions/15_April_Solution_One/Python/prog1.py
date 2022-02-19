
num = int(input("size: "))
arr1 = []
arr2 = []
arr = []
temp = num
while(num != 0):
    i = int(input())
    arr1.append(i)
    arr.append(i)
    num-=1
while(temp != 0):
    i = int(input())
    arr2.append(i)
    arr.append(i)
    temp-=1
arr.sort(reverse=True)
for i in arr:
    print(i, end = " ")
