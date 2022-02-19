months = [0, 31, "28 or 29", 31, 30, 31, 30, 31, 31, 30, 31, 30, 31]
n = int(input("Input : "))
print(months[n]) if n>0 and n<=12 else print("Enter valid month") 
