try:

	c = int(raw_input("Enter Month : "))
	
	if((c >= 1 and c <= 7 and c % 2 == 1) or (c >= 8 and c <= 12 and c % 2 == 0)):
		print("Number of days 31")
	elif(c == 2):
		print("Number of days 28")
	
	elif(c <= 12  and c >= 1):
		print("Number of days 30")
	else:
		print("Invalid Entry");	

except ValueError as ve:
	print("Not valid Input")
	pass
