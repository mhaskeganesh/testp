l1 = list()
l2 = []
print("Enter length : ")
n = int(input())
print("Enter Array 1")
for i in range(0, n):
    l1.append(int(input()))
print("Enter Array 2")
for i in range(0, n):
    l2.append(int(input()))
l1.extend(l2)
l1.sort(reverse = True)
print(l1)
    
