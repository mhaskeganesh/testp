p, c, m, b, comp = [int(i) for i in input("Marks : ").split()]
per = (p+c+m+b+comp)/5
if p>=0 and c>=0 and m>=0 and b>=0 and comp>=0 and p<=100 and c<=100 and m<=100 and b<=100 and comp<=100:
    if per>=90:
        print("Grade A")
    elif per>=80 and per<90:
        print("Grade B")
    elif per>=70 and per<80:
        print("Grade C")
    elif per>=60 and per<70:
        print("Grade D")
    elif per>=40 and per<=60:
        print("Grade E")
    elif per<40:
        print("Grade F")
else:
    print("Enter valid marks")
