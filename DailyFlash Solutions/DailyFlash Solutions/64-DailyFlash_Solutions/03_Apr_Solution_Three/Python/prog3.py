import array
n = int(input())
arr1 = array.array("i", [])
j = 0
print("Arr1 : ")
while(j < n):
    num = int(input())
    arr1.append(num);
    j+=1
j = 0
arr2 = array.array("i", [])
arr = array.array("i", [])
print("Arr2 : ")
while(j < n):
    num = int(input())
    arr2.append(num)
    arr.append(arr1[j] * arr2[j])
    j+=1
for i in arr:
    print(i)
