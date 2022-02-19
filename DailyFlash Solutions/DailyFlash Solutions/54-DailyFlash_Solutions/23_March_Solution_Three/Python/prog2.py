arr = raw_input()
for i in range(len(arr)):
    if(arr[i] == 'a' or arr[i] == 'e' or arr[i] == 'o' or arr[i] == 'i' or arr[i] == 'u'):
        print(ord(arr[i]))
