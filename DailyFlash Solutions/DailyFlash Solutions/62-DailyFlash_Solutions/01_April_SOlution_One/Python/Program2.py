num = int(input("Enter the number : "))
numArr_list = list()

for i in range(num):
    numArr_list.append(int(input()))

numArr_list.sort()

for i in numArr_list:
    print(i,end=" ")

