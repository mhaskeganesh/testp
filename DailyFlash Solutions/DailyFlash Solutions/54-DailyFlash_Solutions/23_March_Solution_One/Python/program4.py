

for itr in range(4):
    for jtr in range(7-itr):
        print("",end="\t") if jtr<itr else print(5+(itr*jtr),end="\t")
    print("")    
