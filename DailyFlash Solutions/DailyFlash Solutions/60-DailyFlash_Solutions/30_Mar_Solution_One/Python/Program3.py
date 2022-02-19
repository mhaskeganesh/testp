col = int(input("Enter Columns : "))
row=col*2-1

for i in range(row):
    for j in range(col):
            if i+j>=row//2 and i-j<=row//2 :
                    print('0',end="\t")
            else:
                print("",end="\t")
    print()
