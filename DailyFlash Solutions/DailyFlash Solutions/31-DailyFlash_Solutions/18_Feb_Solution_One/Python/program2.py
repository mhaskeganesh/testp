
num = input("Enter the number : ")

sum1 = 0 
count = 0

while num!=0:

    rem = num%10

    sum1 = sum1+rem

    count = count + 1

    num = num/10

print("Sum = "+str(sum1)) 

print("Avg = "+str(sum1/count))
