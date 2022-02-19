
c = raw_input("Enter Character : ")

try :
	if((ord(c) >= 65 and ord(c) <= 90) or (ord(c) >= 97 and ord(c) <= 122)):
		
		if(c == 'A' or c == 'E' or c == 'I' or c == 'O' or c == 'U' or
				c == 'a' or c == 'e' or c == 'i' or c == 'o' or c == 'u'):
			print(c + " is Vowel");
		
		else :
			print(c + " is Consonant");	
		
	else:
		print(c + " is not alphabet")
		
except TypeError as te:
	print("Wrong Entry of Character .... You may have entered string instead of character")
	pass
