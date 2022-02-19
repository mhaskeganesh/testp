

ch ='A'

for itr in range(0,4):

    for jtr in range(0,4):

        print(" ",end="")if jtr<3-itr else print(chr(ord(ch)+jtr),end="")
    print("")    
