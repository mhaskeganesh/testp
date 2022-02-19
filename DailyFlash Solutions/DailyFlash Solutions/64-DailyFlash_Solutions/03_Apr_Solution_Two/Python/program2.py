
s = input("Enter String : ")
cnt = 0
for i in range(0, len(s)):
    ch = s[i]
    if(ch == 'A' or ch == 'a' or ch == 'E' or ch == 'e' or ch == 'I' or ch == 'i' or ch == 'O' or ch == 'o' or ch == 'u' or ch == 'U'):
        cnt+=1
print(cnt)
