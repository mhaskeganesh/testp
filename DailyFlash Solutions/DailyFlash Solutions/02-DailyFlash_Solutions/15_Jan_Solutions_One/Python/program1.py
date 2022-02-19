
c = raw_input("Enter Character : ")

try :
	if(ord(c) >= 65 and ord(c) <= 90):
		print("{} is in UpperCase".format(c))
		
	elif(ord(c) >= 97 and ord(c) <= 122) :
		print("{} is in LowerCase".format(c))

	else :
		print("{} is not alphabet".format(c))

except TypeError as te:
	print("Character is not Entered")
	pass