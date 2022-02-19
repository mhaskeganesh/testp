num = int(input("Enter the number : "))
numArr_list = list()

for i in range(num):
    numArr_list.append(int(input()))

mul=1

for i in range(num):
    if i%2==0:
        mul*=numArr_list[i]



print("Multiplication is :",mul)
