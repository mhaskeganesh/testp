try:
	a = int(raw_input("Enter Number : "))
except ValueError as e:
	print("Not a Number")
	exit(0)
	pass

print("Number : {}".format(a))

