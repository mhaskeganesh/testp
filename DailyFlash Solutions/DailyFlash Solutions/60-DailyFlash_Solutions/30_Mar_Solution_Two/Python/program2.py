
s = input("Enter String : ")

k = 0
for i in range(0, len(s)):
    if((s[i-1] == ' ' or s[i-1] == '\t' ) and (s[i]) != ' '):
        k+=1
print(k+1)
