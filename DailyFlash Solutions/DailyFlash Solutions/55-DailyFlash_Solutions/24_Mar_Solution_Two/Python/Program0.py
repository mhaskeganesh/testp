
l = int(input("Enter length of series  :\t"))

lst = []
cnt = 0

for s in range(l) :

	cnt = cnt + (s*3.14)/6

print("Sum of ",l," elements of series is ",round(cnt,2))
