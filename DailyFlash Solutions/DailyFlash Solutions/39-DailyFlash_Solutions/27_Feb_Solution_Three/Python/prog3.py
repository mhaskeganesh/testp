import array
num = int(input("Num : "))
cnt = 0
arr = array.array('i', [0, 0, 0, 0, 0, 0, 0, 0, 0, 0])
while(num != 0):
    arr[num % 10] = 1
    num = int(num / 10)
ind = 0
for i in range(10):
    if(arr[9 - i] == 1):
        ind = 9 - i
        cnt += 1
    if(cnt == 2):
        print("Sec max : ", i)
        break
if(cnt == 1):
        print("Sec max : ", arr[ind])
    
