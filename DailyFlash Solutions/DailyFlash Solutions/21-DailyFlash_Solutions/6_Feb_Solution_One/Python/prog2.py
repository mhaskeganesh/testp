b = ""
dec = int(input("Enter decimal num : "))
while(True):
    quo = int(dec / 2)
    rem = dec % 2
    dec = quo
    if(rem == 1):
            b = b + "1"		
    elif(rem == 0):
            b = b + "0"
    if(quo == 0):
            break
        
for i in range(len(b) - 1, -1, -1):
    print(b[i], end = "")

