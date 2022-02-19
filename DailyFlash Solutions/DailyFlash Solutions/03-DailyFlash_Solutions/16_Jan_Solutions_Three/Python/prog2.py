p, n = [int(i) for i in input("P, N: ").split()]
r = float(input("Rate : "))
print("SI : ", (p*r*n)/100) if p>=0 and r>=0 and n>=0 else print("Enter valid input")
