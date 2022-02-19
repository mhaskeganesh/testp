'''
Write a Program to print AP in reverse order take last Element &
Common Difference from user.
'''
num_last=int(input("Enter last element:"))
common_difference=int(input("Enter common difference:"))
Sum=0

print("The AP is:",end=" ")
while(num_last > 0):
    print(num_last,end=" ")
    num_last=num_last - common_difference
print()


