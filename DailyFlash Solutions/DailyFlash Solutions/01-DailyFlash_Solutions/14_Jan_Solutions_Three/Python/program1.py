
c = raw_input("Enter Character : ")

try :
	if((ord(c) >= 65 and ord(c) <= 90) or (ord(c) >= 97 and ord(c) <= 122)):
		
		print( c + " is alphabet");
		
	else:
		print(c + " is not alphabet")
		
except TypeError as te:
	print("Wrong Entry of Character .... You may have entered string instead of character")
	pass
