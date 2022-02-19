unit = int(input("Units : "))
if(unit >= 0):
    if(unit <= 50):
        print("Bill : ", unit * 0.50)
    elif(unit > 50 and unit <= 100):
        print("Bill : ", unit * 0.75)
    elif(unit > 100 and unit <= 250):
        print("Bill : ", unit * 1.20)	
    else:
        print("Bill : ", unit * 1.50)
else:
        print("Enter valid input.")

