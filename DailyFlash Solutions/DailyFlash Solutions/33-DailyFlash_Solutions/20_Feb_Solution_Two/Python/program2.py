
i = 0
n = int(input("Enter Number: "))

while(n!=0) :
    temp = n%10
    i = 3
    binary = []
    while(i>=0) :
        binary.append(chr((temp % 16) + 48))
        temp = temp // 16
        i-=1
		
    print("Hexadecimal of ", n%10, ":",binary[::-1])
    n = n//10
