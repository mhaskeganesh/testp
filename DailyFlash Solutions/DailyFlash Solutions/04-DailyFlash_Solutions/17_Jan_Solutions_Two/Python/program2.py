

try:
	u = int(raw_input("Enter Number Of Units : "))	
except ValueError as e:
	exit(0)
	pass

if(u >= 0 and u <= 50):
	print("Electricity Bill : {}".format(0.50 * u))
elif(u > 50 and u <= 150):
	print("Electricity Bill : {}".format(0.75 * u))
elif(u > 150 and u <= 250):
	print("Electricity Bill : {}".format(1.20 * u))
elif(u > 250):
	print("Electricity Bill : {}".format(1.50 * u))
else:
	print("Units can't be negative")
