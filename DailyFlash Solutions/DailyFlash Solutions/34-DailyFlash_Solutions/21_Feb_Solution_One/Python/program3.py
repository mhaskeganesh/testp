
num = input("Enter the number : ")

rev = 0

while num!=0:
    rev = rev*10+(num%10)
    num = num/10

temp = rev

while temp!=0:

    rem = temp%10

    if rem == 0:
        print("Zero  ")
    elif rem == 1:
        print("One  ")
    elif rem == 2:
        print("Two  ")
    elif rem == 3:
        print("Three  ")
    elif rem == 4:
        print("Four  ")
    elif rem == 5:
        print("Five  ")
    elif rem == 6:
        print("Six  ")
    elif rem == 7:
        print("Seven  ")
    elif rem == 8:
        print("Eight  ")
    else:
        print("Nine  ")
    
    temp = temp/10
