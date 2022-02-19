
i = 0
n = int(input("Enter Number: "))

while(n!=0) :
    temp = n%10
    i = 3
    binary = []
    while(i>=0) :
        binary.append(chr((temp % 2) + 48))
        temp = temp // 2
        i-=1
    print("Binary of ", n%10, ":",binary[::-1])
    n = n//10
