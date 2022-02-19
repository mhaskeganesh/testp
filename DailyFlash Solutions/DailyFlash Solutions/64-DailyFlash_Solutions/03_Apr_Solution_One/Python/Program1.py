st = input("Enter the string : ")

v = "AEIOUaeiou"
vow = 0


for x in st :

	if x in v :
		vow+=1

print("Count Of Vowels is ",vow)
