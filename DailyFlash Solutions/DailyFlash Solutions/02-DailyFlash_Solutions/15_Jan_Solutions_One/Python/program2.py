
try :
	a = int(raw_input("Enter Number : "))

	if(a == 0):
		print("Sunday")
	elif(a == 1):
		print("Monday")
	elif(a == 2):
		print("Tuesday")
	elif(a == 3):
		print("WednesDay")
	elif(a == 4):
		print("Thursday")
	elif(a == 5):
		print("Friday")
	elif(a == 6):
		print("Saturday")
	else:
		print("Not within range")

except ValueError as ve:
	print("Not valid Input")
	pass
