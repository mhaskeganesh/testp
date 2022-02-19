
n = int(input("Enter Number : "))
min = n %10

while(n != 0) :
    if(min > n %10):
        min = n % 10
    n = n//10
print("Min : ", min)
