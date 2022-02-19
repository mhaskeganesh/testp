
''' Run this program with python3'''

a =  int(input("Enter Size : "))

if a < 0:
	print("Not allowed");
else :
	k = 0
	for i in range(1 , a * a + 1):
		if i % a == 0 :
			print(k)
			if k == 1:
				k = 0
			else :
				k = 1
		else:
			print(k, end="\t")
