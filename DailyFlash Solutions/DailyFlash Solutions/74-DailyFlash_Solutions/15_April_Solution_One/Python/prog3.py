rows, cols = (3, 3)

arr = [[0 for i in range(cols)] for j in range(rows)] 


for i in range(3):
    s = 0
    for j in range(3):
        arr[i][j] = int(input())
        s+=arr[i][j]
    print(s)

for i in range(3):
    s = 0
    for j in range(3):
        s+=arr[j][i]
    print(s)
