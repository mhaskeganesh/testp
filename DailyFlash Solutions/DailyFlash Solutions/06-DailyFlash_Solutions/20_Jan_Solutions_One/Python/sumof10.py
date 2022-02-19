
"""
Program 4 : Write a Progr am to accept 10 integers from user and prin t s the
sum & average of entered numbers .
Input: 1 2 3 4 5 6 7 8 9 10
Output:
Sum of 10 entered Number is: 55
Average of 10 entered number is: 5.55

"""

print("Enter the 10 number")
s = 0

for itr in range(1,11):
    num = input();
    s = s +num

print("Sum of 10 enterd number is : "+str(s))
print("Average of 10 enterd number is "+str(float(s/10)))
