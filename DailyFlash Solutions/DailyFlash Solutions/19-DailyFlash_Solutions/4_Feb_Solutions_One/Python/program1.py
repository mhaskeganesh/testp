q
 

for itr in range(2,101):

    flag=0
    for jtr in range(2,(itr/2)+1):
        if itr%jtr==0:
            flag=1
            break

    if flag==0:
        print(itr)
    
