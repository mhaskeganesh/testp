
n = int(input("Enter Lenght : "))
l1 = list()
l2 = list()
print("Enter List")
for i in range(0,n):
    l1.append(int(input()))
print("Enter List")
for i in range(0,n):
    l2.append(int(input()))
    l1[i] = l1[i]*l2[i]

print(l1)
