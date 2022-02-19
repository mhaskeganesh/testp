
n = int(input("Length of Array : "))
l = []
mul = 1
for i in range(0,n):
    l.append(int(input()))

for i in range(0, len(l)):
    if(l[i] % 2 == 1):
        l[i] = l[i] * l[i] * l[i]
    else:
        l[i] = l[i] * l[i]

print(l)
