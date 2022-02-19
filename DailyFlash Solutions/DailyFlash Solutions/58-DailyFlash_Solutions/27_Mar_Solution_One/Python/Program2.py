

n = int(input("Enter Number of elements :\t"))

lst = []



for x in range(n) :

	lst.append(int(input("Enter Element : ")))
	
l = len(lst)
l-=1
n-=1
for y in range(l//2) :

	temp = lst[y]
	lst[y] = lst[n]
	lst[n] = temp
	n-=1
print(lst)
