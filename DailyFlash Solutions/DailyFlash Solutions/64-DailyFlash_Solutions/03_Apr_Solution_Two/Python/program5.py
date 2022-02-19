
import math
per = float(input("Enter Fre in Hz  : "))

#g = (4*3.142*3.142*len)/(per*per)
#print("Acceleration : ", g, "m/sec sq")
#per = round((2*3.142)/(math.sqrt(len/9.81)), 3)
#fre = 1/per
#print("period in seconds : ", per)
#print("Frequency in Hz : ", fre)

len = (4*3.142*3.142*per*per)/9.81
print("Length : ", len,"m")
