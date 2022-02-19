
# run using python3

try :
	r = float(input("Enter radius : "))
except ValueError as ve:
	exit(0)
	pass 

print("Area of circle : {}".format(3.14 * r * r)) if(r >= 0) else print("radius can't be negative")

	

