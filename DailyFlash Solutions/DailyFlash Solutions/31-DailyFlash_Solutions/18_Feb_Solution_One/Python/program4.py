

for itr in range(5):
    for jtr in range(5):
        print("",end="\t")if jtr<itr else print((itr+jtr)*jtr,end="\t")
    print("")    
