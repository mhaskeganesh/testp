'''
Write a Program that computes Cartesian space value of a point
P(x, y) if user provides that radius and angle of that point in Polar coordinates
space.
{Note: Considered 2D polar space then x & y values for Cartesian space
computed as, x = r * cos (θ) & y = r * sin (θ)}
'''
import math

radius=int(input("Enter radius of polar coordinate:"))
angle=int(input("Enter angle of polar cordinates:"))

rad=angle*(3.142/180)
x= radius * math.cos(rad)
y= radius * math.sin(rad)
print("x =",round(x,2),"&","y =",round(y,2))


