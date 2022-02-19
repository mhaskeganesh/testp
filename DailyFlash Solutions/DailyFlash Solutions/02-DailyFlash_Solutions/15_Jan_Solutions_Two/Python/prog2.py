days = {0:"Monday", 1:"Tuesday", 2:"Wednesday", 3:"Thursday", 4:"Friday", 5:"Saturday", 6:"Sunday"}
n = int(input("Input : "))
print(days.get(n)) if n>=0 and n <=6 else print("Enter valid day.")

