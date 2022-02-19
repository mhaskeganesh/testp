
n = list()
n.append(int(input("Enter Numbers : ")))
for i in range(1,5):
	n.append(int(input()));
	if(n[i-1] > n[i]):
		print("Loop exited with ", n[i])
		break
		
		


