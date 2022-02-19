

num  = input("Enter the four digit binary number : ")

rem = 0
position = 1
power = 1
sum1 = 0


def powerOf2(under,upper):
    while(upper!=1):
        under = 2*under
        upper = upper-1
    return under    


while num!=0:

    rem = num%10;

    if rem==1:
        sum1 = sum1 + power;
    power = powerOf2(2,position)
    position = position + 1

    num = num/10


print(sum1)

