
n = int(input("Enter Number : "))
k = 65
for i in range(0,n):
    for j in range(0,n-i):
        print(chr(k), end = "\t")
        k = k + j + 1
    k = k -  j - 1
    print()
	

