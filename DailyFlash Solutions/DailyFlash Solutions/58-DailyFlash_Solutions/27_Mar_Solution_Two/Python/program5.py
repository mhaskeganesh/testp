import math

print("Enter x1 y1")
x1 = int(input())
y1 = int(input())

print("Enter x2 y2")
x2 = int(input())
y2 = int(input())

print("Enter x3 y3")
x3 = int(input())
y3 = int(input())

ab = math.sqrt((x2-x1)*(x2-x1) + (y2-y1)*(y2-y1))
bc = math.sqrt((x2-x3)*(x2-x3) + (y2-y3)*(y2-y3))
ac = math.sqrt((x3-x1)*(x3-x1) + (y3-y1)*(y3-y1))
	
s = (ab + bc + ac)/2
area = math.sqrt(s *(s-ab)*(s-bc)*(s-ac))
print("Height : ", (2*area)/ab)

