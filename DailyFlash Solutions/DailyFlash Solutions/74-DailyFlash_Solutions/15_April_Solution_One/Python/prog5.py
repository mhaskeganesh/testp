rows, cols = (2, 2)

arr1 = [[0 for i in range(cols)] for j in range(rows)] 
arr2 = [[0 for i in range(cols)] for j in range(rows)] 
arr = [[0 for i in range(cols)] for j in range(rows)] 


for i in range(2):
    for j in range(2):
        arr1[i][j] = int(input())
for i in range(2):
    for j in range(2):
        arr2[i][j] = int(input())
        arr[i][j] = arr1[i][j] + arr2[i][j]

for i in range(2):
    for j in range(2):
        print(arr[i][j], end = "")
    print()
