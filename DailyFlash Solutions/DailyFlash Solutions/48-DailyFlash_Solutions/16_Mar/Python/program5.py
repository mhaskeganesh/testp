
import math
print("1st point (A) :")
x1 = float(input())
y1 = float(input())

print("2nd point (B) :")
x2 = float(input())
y2 = float(input())

print("1st point (C) :")
x3 = float(input())
y3 = float(input())
ab = math.sqrt(pow(y2-y1,2)+ pow(x2-x1,2))
bc = math.sqrt(pow(y2-y3,2)+ pow(x2-x3,2))
ac = math.sqrt(pow(y3-y1,2)+ pow(x3-x1,2))
print("Distance (AC): ", ab)
print("Distance (BC): ", bc)
print("Distance (AC): ", ac)
print("Perimeter of Triangle: ", ac + bc + ab)
p = (ab + ac + bc) / 2
print("Semi-Perimeter of Triangle: ", p)
area = math.sqrt(p*(p-ab)*(p-bc)*(p-ac))
print("Area of Triangle: ", area)
print("Radius of In-Circle: ", area/p)

