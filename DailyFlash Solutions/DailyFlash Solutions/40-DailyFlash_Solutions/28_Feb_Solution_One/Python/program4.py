
n = int(input("Enter Number : "))
for i in range(0,n):
    for j in range(0,n-i):
        print((i+j),chr(j+65), end = "\t")
    print()
	

