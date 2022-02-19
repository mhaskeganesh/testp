

sr = input("Enter a String  :\t")
vow = "AEIOUaeiou"
ns = []

for i in range(len(sr)) :
	
	if sr[i] in vow :
		print("Hello")
		ns.append(chr(ord(sr[i]) + 1))
	else :
		ns.append(sr[i])

for i in ns :
	print(i,end="",sep="")

print()

