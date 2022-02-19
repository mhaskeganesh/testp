num1 = 97  

for i in range(0,4):
    num = 97
    num1 = num + 2*i
    num = num1 
    for j in range(4,i,-1):
        print(chr(num),end="\t")
        num = num + 1
                        
    print()



