s = input("Enter bin : ")
i = 0
length = len(s) 
if(length % 3 == 0):
    i = 0 
else:
    i = length % 3 
d = 0
if(i != 0):
    for j in range(i):
        if(s[j] == '0'):
            num = 0 
        elif(s[j] == '1'):
            num = 1 
            d = d * 2 + num 
        print(d, end = "") 
cnt = 0 
d = 0 
for j in range(i, length):
    if(s[j] == '0'):
        num = 0 
    elif(s[j] == '1'):
        num = 1 
    d = d * 2 + num 
    cnt += 1 
    if(cnt % 3 == 0):
        print(d, end = "")
        d = 0 
