

def mybin(num):
    if num == 0 :
        return 0
    elif num == 1:
        return 1
    elif num==2:
        return 10
    elif num==3:
        return 11
    elif num==4:
        return 100
    elif num==5:
        return 101
    elif num == 6:
        return 110




for itr in range(4):
    for jtr in range(4):
        print("",end="\t")if jtr<itr else print(mybin(itr+jtr),end="\t")
    print("")    
