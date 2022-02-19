
l = int(input("Enter Number of Elements \t : "))

lst1 = list()
lst2 = list()
lst3= list()

print("Enter Elements for Array 1")
for x in range(l) : 

    lst1.append(int(input()))

print("Enter Elements for Array 2")
for x in range(l) : 

    lst2.append(int(input()))

lst3 = lst1 + lst2

print("Elements after Concatenation")
for x in range(2*l) : 

    print(lst3[x],end = "\t")

print()

for x in range(2*l) : 

    for y in range(2*l) : 

        if lst3[x] > lst3[y] :

            lst3[x],lst3[y] = lst3[y],lst3[x]


print("Elements after Concatenation  and Sorting ")
for x in range(2*l) : 

    print(lst3[x],end = "\t")

print()
