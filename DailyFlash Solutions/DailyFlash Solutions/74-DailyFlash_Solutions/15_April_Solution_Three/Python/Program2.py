
m = int(input("Enter Number of Rows \t : "))
n = int(input("Enter Number of Columns \t : "))

lst1 = list()
row = list()
col = list()

print("Enter Elements for Array 1")
for x in range(m) : 

    print("Enter Elements for Row ",x)
    lst1.append(list())
    for y in range(n) :

        lst1[x].append(int(input()))


s = 0
for x in range(m) : 

    for y in range(n) :
        s+=lst1[x][y]

    row.append(s)
    s = 0

for x in range(m) : 

    for y in range(n) :
        s+=lst1[y][x]

    col.append(s)
    s = 0

print("Row-wise Sum is ")
for x in range(m) :

    print(row[x],end="\t")
print()

print("Col-wise Sum is ")
for x in range(m) :

    print(col[x],end="\t")
print()
