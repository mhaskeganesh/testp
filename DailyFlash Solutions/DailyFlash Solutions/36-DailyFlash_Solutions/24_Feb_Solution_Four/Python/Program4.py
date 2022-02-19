'''

Program4 -- Write a Program that prints frequency of each unique digit from a number provided by user.
'''

num=int(input("Enter the number\t: "))

temp = num

digits = [0,0,0,0,0,0,0,0,0,0,]
while temp > 0 :

    digit = temp%10
    digits[digit]+=1
    temp =  temp //10

for x in range(10):
    if digits[x] != 0 :
        print("Frequency of ",x," in Number ",num," is ",digits[x])
