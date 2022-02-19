num = input("Enter num : ")
if(num[0] == '0'):
    print("Not duck")
for i in range(1, len(num)):
    if(num[i] == '0'):
        print("Duck")
        break
