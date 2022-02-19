arr = raw_input()
for i in arr:
    if(i == 'a' or i == 'o' or i == 'i' or i == 'e' or i == 'u'):
        i = chr(ord(i) + 1)
    print(i)
