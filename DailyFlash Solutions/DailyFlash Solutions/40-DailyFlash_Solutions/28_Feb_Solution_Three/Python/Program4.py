'''
Write a Program calculates Distance between two points of a line,
if user provides Point A & Point B of that line.
{Note: Distance of a line is computed as d(line) =√(x2-x1)2 + (y2-y1)2
'''
def slope(x1,y1,x2,y2):
    a =((x2 - x1)**2 / (y2 - y1)**2)**0.5
    return a

x1,y1=input("Enter Co-Ordinates as A(x1,y1):").split()
x2,y2=input("Enter Co-Ordinates as B(x2,y2):").split()
x1=float(x1)
y1=float(y1)
x2=float(x2)
y2=float(y2)

print("Distance d(AB):",slope(x1,y1,x2,y2))
