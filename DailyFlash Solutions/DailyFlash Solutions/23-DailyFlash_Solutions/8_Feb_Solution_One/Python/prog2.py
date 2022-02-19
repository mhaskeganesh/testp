l = []
arr = ""
num = int(input("Enter num : "))
while(True):
    quo = int(num / 8)
    rem = num % 8
    num = quo
    l.append(chr(48 + rem))
    if(quo == 0):
            break
for i in l[::-1]:
    print(i, end = "")
