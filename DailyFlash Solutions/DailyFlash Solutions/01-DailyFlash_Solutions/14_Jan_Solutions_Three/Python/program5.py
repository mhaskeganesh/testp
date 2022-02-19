
print("Enter Three Numbers : ")
a = int(raw_input())
b = int(raw_input())
c = int(raw_input())

try :
	if  a > b :
		if a > c :
			print(str(a) + " is greater" )
		else:
				
			print(str(c) + " is greater" )
	elif b > c :
		print(str(b) + " is greater" )
	
	else:
		print(str(c) + " is greater" )
	
except TypeError as te:
	print("Wrong Entry of Character .... You may have entered string instead of character")
	pass
