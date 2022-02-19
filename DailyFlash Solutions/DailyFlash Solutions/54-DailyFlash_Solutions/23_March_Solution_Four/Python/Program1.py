

sr = input("Enter a String  :\t")

cw = "AEIOUaeiou"

vow = []

print("Ascii Value of Vowels are")
for i in sr :
	
	if i in cw :
		print(i,"\t",ord(i))
