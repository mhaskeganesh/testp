mul = 0
print("Enter length : ")
n = int(input())
print("Enter x and y : ")
x = int(input())
y = int(input())

temp = 0
factor = 3.142 / 6
cnt = 1
while(cnt <= n):
	if(cnt%2==0):
		temp = y
	else:
		temp = x
	mul = mul + (cnt)/pow((x + y), temp)
	cnt+=1
print(mul)
