
import math
n = int(input("Total Number : "))
l = []
sum = 0
for i in range(1,n+1):
    k = int(input())
    l.append(k)
    sum+=k

sum = sum // n
var = 0
for i in l:
    var = var + math.pow(sum - i,2)

print("1: Average")
print("2: Variance")
print("1: standard Deviation")
print("Enter choice ")
choice = int(input())
if(choice == 1):
    print("Average:",sum)
elif choice == 2:
    var = var / n
    print("variance : ", var)
elif choice == 2:
    print("standard Deviation : ", math.sqrt(var))
else:
    print("Wrong choice")

