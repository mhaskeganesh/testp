'''

Program2 -- Write a Program that calculates radius of a circle if user provides the area covered by that circle.
'''

area=float(input("Enter Area of Circle\t: "))

radius = (area/3.142)**0.5

print("Radius Of Circle is ",round(radius,2))
