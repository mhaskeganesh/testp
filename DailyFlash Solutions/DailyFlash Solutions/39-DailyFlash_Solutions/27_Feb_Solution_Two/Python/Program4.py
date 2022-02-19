'''

Program4 -- Write a Program calculates slope of a line if user provides the Two Points A & B of that line.

'''

x1,y1 = [float(x) for x in input("Enter X and Y Co-ordinates of Point-1 \t: ").split()]
x2,y2 = [float(x) for x in input("Enter X and Y Co-ordinates of Point-2 \t: ").split()]

slope = (y2 - y1)/(x2 - x1)

print("Slope of Line is = ",round(slope,2))
