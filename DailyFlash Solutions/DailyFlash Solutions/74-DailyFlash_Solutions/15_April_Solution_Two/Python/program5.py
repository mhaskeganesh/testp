
arr = list()
mat = list()
m = int(input("Row : "))
n = int(input("Col : "))

print("Enter Matrix 1:")
for i in range(0,m):
    arr.append([])
    for j in range(0,n):
        arr[i].append(int(input()))

print("Enter Matrix 2:")
for i in range(0,m):
    mat.append([])
    for j in range(0,n):
        mat[i].append(int(input()))
        mat[i][j] = mat[i][j] + arr[i][j]



print(mat)


