
len1 = input("Enter the length : ")

max1 = 0

arr = []

print("Enter the numbers")
for itr in range(len1):
    arr.append(input())
    if max1<arr[itr]:
        max1 = arr[itr]

print("Maximum number : "+str(max1))
