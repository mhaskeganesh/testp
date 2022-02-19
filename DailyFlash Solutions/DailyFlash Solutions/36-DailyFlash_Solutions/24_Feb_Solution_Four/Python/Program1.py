'''

Program1 -- Write a Program that calculates Square Root of a number entered by user.
{Note: Do not use library functions}
'''

num = int(input("Enter A Number\t:"))

def Square_root(num) :

    temp = num
    for x in range(1,num):
        if temp//x == x:
            print("Square Root of ",num," is ",x)
            return True;
    print("The Number ",num," is not a Perfect Square")

Square_root(num)
