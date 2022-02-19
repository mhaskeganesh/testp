col = int(input("Enter Columns : "))
row=col*2-1

n=65

for i in range(row):
    for j in range(col):
            if i+j>=row//2 and i-j<=row//2 :
                    print(chr(n),end="\t")
                    n+=1
            else:
                print("",end="\t")
    print()
