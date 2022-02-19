year = int(input("Year : "))
if year%100==0 and year>0:
    if year%400==0:
        print("Leap year")
    else:
        print("Not a leap year")
elif year>=0 and year%4==0:
    print("Leap year")
else:
    print("Not a leap year")
