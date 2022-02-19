

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

print("decimal")
print(sum1)

rev =0
while sum1!=0:
    rem = sum1%8;
    rev = 10*rev+rem
    sum1= sum1/8;

ans = 0
while rev!=0:
    rem = rev%10
    ans = 10*ans + rem

    rev = rev/10

print("octal")
print(ans)
