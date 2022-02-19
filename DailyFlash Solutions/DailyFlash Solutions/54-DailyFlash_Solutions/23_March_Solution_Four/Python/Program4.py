
lst = []
sn = 0

for i in range(int(input("Enter Valu of N : "))):
	
	lst.append(int(input("Enter Element ")))
	sn+=lst[i]

avg = round(sn/len(lst),2)
var = 0

for i in range(len(lst)) :

	var = round((var + ((lst[i]-avg)**2) / len(lst)),2)

while True :

	print("1 : Average\n2 : Variance\n3 : Standard Deviation")
	c = int(input("Enter Your Choice\t:"))
	if c == 1 :
		print("Average = ",avg)
	elif c == 2 :
		print("Variance = ",var)
	elif c == 3 :
		print("Standard Deviation = ",round(var**0.5,2))
	else :
		break;
