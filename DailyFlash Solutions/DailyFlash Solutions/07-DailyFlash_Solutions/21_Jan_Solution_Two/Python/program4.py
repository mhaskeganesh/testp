
try:
	a = int(input("Enter Number : "))
except ValueError as e:
	print("Invalid")
	exit(0)
	pass
if a == 0:
	exit(0)
for i in range(1,11):
	print(i * a, end = ' ')
print()
