


ch = 'A'

for itr in range(0,4):

    for jtr in range(0,4):
        if jtr<3-itr :
            print(" ",end="")
        else :
            print(ch,end = "")
            ch = chr(ord(ch)+1)
    print("")
    ch = 'A'
