'''
Program 1: Write a Program that computes Cartesian space value of a point
P(x, y, z) if user provides that radius, angle theta (θ) & angle phi (φ) of that
point in Polar coordinates space.
{Note: Considered 3D polar space then x, y, & z values for Cartesian space
computed as, x = r * sin (θ) * cos (φ), y = r * sin (θ) * sin (φ) & z = r * cos (θ)}
'''


import math

radius=int(input("Enter radius of polar coordinate\t: "))
angle1=int(input("Enter angle(0) of polar cordinates\t: "))
angle2=int(input("Enter angle(phi) of polar cordinates\t: "))

rad1=angle1*(3.142/180)
rad2=angle2*(3.142/180)
y= radius * math.sin(rad1) * math.cos(rad2)
x= radius * math.sin(rad1) * math.sin(rad2)
z= radius * math.cos(rad1)
print("X =",round(x,2),"\nY =",round(y,2),"\nZ =",round(z,2))


