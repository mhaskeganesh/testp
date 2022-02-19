'''

Program1 -- Write a Program that calculates Square Root of a number ranging in 200 to 600
{Note: Do not use library functions}
'''

start = int(input("Enter Start Element for Square Root Series\t:"))
end = int(input("Enter End Element for Square Root Series\t:"))

if end < start:
    start,end = end,start

def Square_root(num) :

    temp = num
    for x in range(1,num+1):
        if temp/x == x:
            print("Square Root of ",num," is ",x)
            return True;

for x in range(start,end+1):
    Square_root(x)

