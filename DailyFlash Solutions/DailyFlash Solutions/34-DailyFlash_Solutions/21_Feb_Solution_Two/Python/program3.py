
match = {0 : "Zero", 1 : "One", 2 : "Two", 3 : "Three", 4: "Four", 5: "Five", 6: "Six", 7: "Seven", 8: "Eight"
, 9 : "Nine"}
n = int(input("Enter Number : "))
rev = 0
while n != 0 :
	rev = rev * 10 + n % 10
	n = n//10

n = rev

while n!=0 :

	print(match[n%10],end=" ")
	n = n // 10

print()