
for i in range(0, 4):
    for j in range(0, 7):   
        if(j < 4):
            if(j < 3 - i):
                print("", end = " ")
            else:
                print("*", end = "")
        else:
            if(j < 4 + i):
                print("*", end = "")
    print()
			
		

