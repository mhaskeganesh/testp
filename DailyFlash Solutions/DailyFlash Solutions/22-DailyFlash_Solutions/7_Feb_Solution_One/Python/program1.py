num = input("Enter the number")

flag = 0

for itr in range(2,(num/2)+1):
    if num % itr ==0:
        flag = 1
        break

if flag==0:
    print("Number is prime")
else:
    print("Number is not prime")

