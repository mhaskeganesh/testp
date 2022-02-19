"""
Program 2: Write a program that takes electricity unit charges as input and
calculate total electricity bill according to the given condition:
For first 50 units Rs. 0.50/unit
For next 100 units Rs. 0.75/unit
For next 100 units Rs. 1.20/unit
For unit above 250 Rs. 1.50/unit.

"""


unit = input("Enter the electricity unit ")

if unit<=50:
    print("Electricity charge "+str(unit*0.50))
elif unit<=150:
    print("Electricity charge "+str(unit*0.75)) 
elif unit<=250:
    print("Electricity charge "+str(unit*1.20))
else:
    print("Electricity charge "+str(unit*1.50))
