num = int(input("Enter num : "))
m1 = 9
m2 = 9
cnt = 0
while(num != 0):
    rem = num % 10
    if(rem <= m1):
        m2 = m1
        m1 = rem
    elif(rem < m2):
        m2 = rem
    num = int(num / 10)
print("sec min :", m2)
