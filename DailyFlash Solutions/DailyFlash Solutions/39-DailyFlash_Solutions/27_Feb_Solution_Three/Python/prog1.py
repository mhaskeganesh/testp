l, u = [int(i) for i in input("Enter l and u : ").split()]
rev = 0
for i in range(l, u + 1):
    temp = i
    rev = 0
    while(temp != 0):
        rev = rev * 10 + temp % 10
        temp = int(temp / 10)
    if(i == rev):
        print(i, end= " ")
