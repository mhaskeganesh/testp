b = int(input("bin : "))
rem = 0
dec = 0
i = 0
while(b != 0):
    rem = b % 10
    if(not (rem == 0 or rem == 1)):
        print("Enter valid bin")
        exit(1)
    dec = dec + rem * (2 ** i)
    i += 1
    b = b / 10
    b = int(b)
print("Dec : ", dec)
