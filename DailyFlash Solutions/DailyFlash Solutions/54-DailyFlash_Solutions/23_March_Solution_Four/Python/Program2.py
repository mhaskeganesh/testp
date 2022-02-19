

n = int(input("Enter Number of elements :\t"))

lst = []
m = 0


for x in range(n) :

	lst.append(int(input("Enter Element : ")))
	if m < lst[x] :
		m = lst[x]

print("Max = ",m)
