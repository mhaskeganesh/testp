
print("Enter Numbers : ")
while True :
	n = int(input())
	rev = 0
	temp = n
	while(n != 0):
		rev = rev * 10 + n % 10
		n //= 10
	
	if(temp != rev):
		print(temp)
	else:
		break

