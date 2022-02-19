
l = int(input("Enter length of series  :\t"))

lst = []
cnt = 0

for s in range(1,l+1) :

	cnt = cnt + s/((s*(s+1))**0.5)

print("Sum of ",l," elements of series is ",round(cnt,2))
