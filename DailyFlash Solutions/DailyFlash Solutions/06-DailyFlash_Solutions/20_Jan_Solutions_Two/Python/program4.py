
try:
	print("Enter Number : ")
	n1, n2, n3, n4 = [int(x) for x in raw_input().split()]

except ValueError as e:
	print("Not a Number")
	exit(0)
	pass
sum = n1 + n2 + n3 + n4
print("Sum : {}".format(sum))
print("Average : {}".format(sum/4))

