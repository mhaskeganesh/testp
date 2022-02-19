
''' Run this program with python3'''

a =  int(input("Enter Size : "))

if a < 0:
	print("Not allowed");
else :

	k = 2;
	for i in range(1 , a * a + 1):
		if i % a == 0 :
			print(k)
			k = 2
		else:
			print(k, end="\t")
			k+=2
