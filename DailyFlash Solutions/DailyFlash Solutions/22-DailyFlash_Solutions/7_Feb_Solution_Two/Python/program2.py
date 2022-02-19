q
n = int(input("Enter Decimal Number : "))
p = list()

if(n<0):
	exit(0)
i = 0
while(n != 0):
	p.append(chr(n%16 + 48)) if (n%16 <= 9) else p.append(chr(n%16 + 55))
	n = n//16
	i+=1
		

i-=1
while(i >= 0):
	print(p[i], end = "")
	i-=1
	
print()


