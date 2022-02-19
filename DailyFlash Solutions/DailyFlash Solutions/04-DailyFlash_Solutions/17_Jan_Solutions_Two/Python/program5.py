
a = raw_input("Enter character : ")
try:

	if a == '':
		print("ASCII valur : 10")
	else:	
		print("ASCII valur : {}".format(ord(a)))

except TypeError :
	print("Not allowed")
	pass
