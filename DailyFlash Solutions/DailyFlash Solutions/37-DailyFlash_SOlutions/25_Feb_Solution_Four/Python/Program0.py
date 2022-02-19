'''

Program0 -- Write a Program that prints the Harshad numbers bounding between numbers entered by user.
'''

start = int(input("Enter Start Element for Harshad Series\t:"))
end = int(input("Enter End Element for Harshad Series\t:"))

def Check_Harshad(num):

    sum = 0;
    temp = num

    while temp > 0 :

        sum = sum + (temp%10)
        temp = temp//10

    if num%sum == 0:
        print(num,end=" ")

for x in range(start,end+1):
    Check_Harshad(x)
print()
