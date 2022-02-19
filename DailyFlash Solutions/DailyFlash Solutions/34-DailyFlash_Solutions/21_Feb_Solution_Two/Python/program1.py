
import math as m
print("Enter theta , phi and radius")
a = float(input())
b = float(input())
r = float(input())
a = 3.142 * (a / 180)
b = 3.142 * (b / 180)

print("x : ", round(r * m.sin(a) * m.cos(b), 2))
print("y : ",round(r * m.sin(a) * m.sin(b),2))
print("z : ",round(r * m.cos(a),2))
