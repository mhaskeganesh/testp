num = int(input("Enter num : "))
rev = 0
temp = num
while(num != 0):
    rem = num % 10
    rev = rev * 10 + rem 
    num = int(num / 10)
i = 1
s = 0
while(rev != 0):
    rem = rev % 10
    s += rem ** i
    i += 1
    rev = int(rev / 10)
if(temp == s):
    print("Disarium num")

