
s = input("Enter String : ")

l = list(s)

for i in range(0, len(l)):
    if(l[i] == 'A'or l[i] == 'a' or l[i] == 'E' or l[i] == 'e' or l[i] == 'I' or l[i] == 'i' or l[i] == 'o' or l[i] == 'O' or l[i] == 'u' or l[i] == 'U'):
        l[i] = chr(ord(l[i]) + 1)

s = str(l)
print(s)