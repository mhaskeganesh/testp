
n = int(input("Length of Array : "))
l = []
for i in range(0,n):
    l.append(int(input()))

for i in range(0, len(l)):
    if(l[i] % 2 == 1):
        print(l[i]*l[i], end = " ")

print()

