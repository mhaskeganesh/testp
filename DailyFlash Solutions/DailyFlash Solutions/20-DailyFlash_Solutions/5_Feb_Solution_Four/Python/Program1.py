
num , num1 = 0 , 1
num2 = 0
print(num,"\t",num1,end="\t")
for i in range(1,5):
    num2 = num + num1 
    print(num2,end="\t")
    num = num1 
    num1 = num2
