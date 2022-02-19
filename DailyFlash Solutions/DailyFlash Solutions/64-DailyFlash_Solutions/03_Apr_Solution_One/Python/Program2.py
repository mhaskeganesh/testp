num = int(input("Enter the number : "))
numArr_list1 = list()
numArr_list2 = list()
numArr_list3 = list()

print("Enter Elements for Array 1")
for i in range(num):
    numArr_list1.append(int(input()))

print("Enter Elements for Array 2")
for i in range(num):
    numArr_list2.append(int(input()))

print("After Operation Elements of Third Array are")
for i in range(num):
    numArr_list3.append(numArr_list1[i] * numArr_list2[i])
    print(numArr_list3[i],end=" ")
print()
