
st = input("Enter String : ")

for i in range(0,len(st)):
    if(st[i]== 'a' or st[i] == 'A' or st[i] == 'E' or st[i] == 'e' or st[i] == 'I' or st[i] == 'i' or st[i] == 'O' or st[i] == 'o' or st[i] == 'u' or st[i] == 'U'):
        print(st[i]," : ", ord(st[i]),end = " ")
print()
