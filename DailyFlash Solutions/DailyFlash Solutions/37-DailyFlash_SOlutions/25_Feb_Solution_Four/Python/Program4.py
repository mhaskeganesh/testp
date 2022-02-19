'''

Program4 -- Write a Program calculates mid-point of a line made up of two points A (4, 5) & B (2, 4).
{Note: mid (X, Y) = { (( x1 + x2) / 2), ((y1 + y2) / 2) } }

'''

x1,y1 = [float(x) for x in input("Enter X and Y Co-ordinates of Point-1 \t: ").split()]
x2,y2 = [float(x) for x in input("Enter X and Y Co-ordinates of Point-2 \t: ").split()]

x = (x1+x2)/2
y = (y1+y2)/2

print("Midpoint Co-Ordinates are X = ",round(x,2)," and Y = ",round(y,2))
