
c = raw_input("Enter Character : ")

try :
	if((ord(c) >= 65 and ord(c) <= 90) or (ord(c) >= 97 and ord(c) <= 122)):
		
		print( c + " is alphabet");
		
	elif(ord(c) >= 48 and ord(c) <= 57):
		
		print( c + " is Digit");
		
	else:
		print(c + " is Special Character")
		
except TypeError as te:
	print("Wrong Entry of Character .... You may have entered string instead of character")
	pass
