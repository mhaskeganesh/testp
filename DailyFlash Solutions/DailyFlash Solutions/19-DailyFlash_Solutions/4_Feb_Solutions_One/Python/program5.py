
num = input("Enter the number  : ")

sum1 = 0

for itr in range(1,(num/2)+1):
    if num%itr==0:
        sum1 = sum1 + itr



print("Sum of all possible divisors of "+str(num)+" is "+str(sum1))
