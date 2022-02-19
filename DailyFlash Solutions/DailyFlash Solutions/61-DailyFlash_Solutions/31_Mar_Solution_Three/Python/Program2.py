num = int(input("Enter the number : "))
numArr_list = list()

for i in range(num):
    numArr_list.append(int(input()))

mul=1

for i in range(num):
    if i%2==0:
        numArr_list[i]=numArr_list[i]*numArr_list[i]*numArr_list[i]
    else:
        numArr_list[i]=numArr_list[i]*numArr_list[i]

for i in numArr_list:
    print(i,end=" ")

