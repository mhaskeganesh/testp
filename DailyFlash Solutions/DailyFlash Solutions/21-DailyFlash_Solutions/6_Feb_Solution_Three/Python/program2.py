num = input("Enter the number ")

ben = []

itr = 0

while num!=0:
    rem = num%2
    ben.append(rem)
    itr =itr +1
    num = num/2


for jtr in range(itr-1,-1,-1):
    print(ben[jtr])
