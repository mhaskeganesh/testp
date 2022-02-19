
arr = list()
m = int(input("Row : "))
n = int(input("Col : "))

print("Enter Matrix 1:")
for i in range(0,m):
    arr.append([])
    for j in range(0,n):
        arr[i].append(int(input()))
print("Sum of rows : ")
for i in range(0,m):
    print(sum(arr[i]), end = " ")
print()


