d = {0:'0', 1:'1', 2:'2', 3:'3', 4:'4', 5:'5', 6:'6', 7:'7', 8:'8', 9:'9', 10:'A', 11:'B', 12:'C', 13:'D', 14:'E', 15:'F'}
arr = ""
num = int(input("Enter num : "))
while(True):
    quo = int(num / 16)
    rem = num % 16
    num = quo
    if(rem < 10):
        arr += d[rem]
    else: 
        arr += d[rem]
    if(quo == 0):
            break
for i in range(len(arr) - 1, -1, -1):
    print(arr[i], end = "")
