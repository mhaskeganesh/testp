
try:
	k = int(input("Enter Number : "))
except ValueError as e:
	print("Not a Number")
	exit(0)
	pass

print("Even Number") if(k % 2 == 0) else print("Odd Number")

