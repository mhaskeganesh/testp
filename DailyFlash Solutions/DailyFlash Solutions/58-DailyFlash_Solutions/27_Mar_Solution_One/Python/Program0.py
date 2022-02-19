
l = int(input("Enter length of series  :\t"))
x = int(input("Enter Value of X  :\t"))
y = int(input("Enter Value of Y  :\t"))

lst = []
cnt = 0
t = x+y

for s in range(l) :

	if s%2 != 0 :
		cnt = cnt + (s/t**x)
	else :
		cnt = cnt + (s/t**y)

print("Sum of ",l," elements of series is ",round(cnt,4))
