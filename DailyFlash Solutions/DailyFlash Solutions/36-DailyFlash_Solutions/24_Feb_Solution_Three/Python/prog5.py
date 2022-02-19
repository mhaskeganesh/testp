import array
num = int(input("Enter num : "))
arr = array.array('i', [0, 0, 0, 0, 0, 0, 0, 0, 0, 0])
while(num != 0):
    arr[num % 10] += 1
    num = int(num / 10)
for i in range(10):
    if(arr[i] != 0):
        print("Freqn of", i, "is", arr[i])
