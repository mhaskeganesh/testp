rev = 0
sum = 0
n = int(input("Enter Number : "))
temp = n
while(n != 0):
        rev = rev * 10 + n %10
        n =  n // 10

n = rev
rev = temp
temp = 1
while(n != 0):
        sum = sum + pow(n % 10, temp)
        temp+=1
        n = n // 10

if(sum == rev):
        print(sum,"is Disarium Number")
else:
        print(rev,"is Not Disarium Numbe")

