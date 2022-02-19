
m = int(input("Enter Number of Rows \t : "))
n = int(input("Enter Number of Columns \t : "))

lst1 = list()
lst2 = list()
lst3 = list()

print("Enter Elements for Matrix 1")
for x in range(m) : 

    print("Enter Elements for Row ",x)
    lst1.append(list())
    for y in range(n) :

        lst1[x].append(int(input()))


print("Enter Elements for Matrix 2")
for x in range(m) : 

    print("Enter Elements for Row ",x)
    lst2.append(list())
    for y in range(n) :

        lst2[x].append(int(input()))



print("Matrix 3")
for x in range(m) : 

    lst3.append(list())
    for y in range(n) :

        lst3[x].append(lst1[x][y] + lst2[x][y])
        print(lst3[x][y],end="\t")

    print()


