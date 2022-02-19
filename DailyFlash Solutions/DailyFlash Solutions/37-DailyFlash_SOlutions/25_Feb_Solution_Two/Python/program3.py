
n = int(input("Enter Number : "))
max = n %10

while(n != 0) :
    if(max < n %10):
        max = n % 10
    n = n//10
print("Max : ", max)