'''
Write a Program to check whether a number can be express as sum
of two prime numbers.
'''

num=int(input("Enter the number\t: "))
list1=[]
for x in range(2, num+ 1):
    for i in range(2, x):
        if (x % i) == 0:
            break
    else:
        list1.append(x)
for x in range(len(list1)):
    for y in range(x,len(list1)):
        if((list1[x] + list1[y]) == num):
            print(num,"=",list1[x],"+",list1[y])
            break;
        elif((list1[x] + list1[y]) >= num):
            break;
