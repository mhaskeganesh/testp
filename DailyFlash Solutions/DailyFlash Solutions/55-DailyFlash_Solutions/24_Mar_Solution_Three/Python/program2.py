s = input("Enter any String : ")
st = list(s)
for i in range(0, len(st)):
	if(ord(st[i]) >= 65 and ord(st[i]) <= 90):
		st[i] = chr(ord(st[i]) + 32)
		
	
print(st)

