
print("Enter Number :")
n = int(input())
a = 'E'
b = 'a'
for i in range(0,n):
    for j in range(0,n):
        if(j < i):
            print("\t", end = "")		
        else:
            if(j % 2 == 0):
                print(a, end = "\t")
                a = chr(ord(a)-1)
            else:
                print(b, end = "\t")
                b = chr(ord(b)+1)
    print()
	

