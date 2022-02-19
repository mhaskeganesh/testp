
import math as m
print("Enter angle in degree and radius");
a = float(input())
r = float(input())
a = 3.142 * (a / 180);

print("x : ", round(r * m.cos(a), 2))
print("y : ",round(r * m.sin(a),2))
