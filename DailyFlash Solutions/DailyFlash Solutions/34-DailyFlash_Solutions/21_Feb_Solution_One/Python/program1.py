
import math

theta = input("Enter the angle theta : ")
alpha = input("Enter the angle alpha : ")
radius = input("Enter the angle radius : ")

print("x = "+str(radius*math.sin(theta*(3.14/180))*math.cos(alpha*(3.14/180))))
print("y = "+str(radius*math.sin(theta*(3.14/180))*math.sin(alpha*(3.14/180))))
print("z = "+str(radius*math.cos(alpha*(3.14/180))))
