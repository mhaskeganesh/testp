
p = input("Enter Binary : ")
le = len(p)
num = 0
ct = 0
j = 0
i = le % 3
if(i != 0):
	while(j < le % 3):
		num = num*2 + (ord(p[j])-48)
		j+=1	
		
	print(num,end="")
	
num = 0
while(i < le):
	num = num*2 + (ord(p[i])-ord('0'))
	i+=1
	ct+=1
	if(ct == 3):
		ct = 0
		print(num,end="")
		num = 0		
		
print()


