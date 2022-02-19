
import math
len = float(input("Enter length in metre  : "))

per = round((2*3.142)/(math.sqrt(len/9.81)), 3)
fre = 1/per
print("period in seconds : ", per)
print("Frequency in Hz : ", fre)
