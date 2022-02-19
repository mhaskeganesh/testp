x1 = float(input("Enter X Co-Ord of Pt-1\t:"))
y1 = float(input("Enter Y Co-Ord of Pt-1\t:"))
x2 = float(input("Enter X Co-Ord of Pt-2\t:"))
y2 = float(input("Enter Y Co-Ord of Pt-2\t:"))
x3 = float(input("Enter X Co-Ord of Pt-3\t:"))
y3 = float(input("Enter Y Co-Ord of Pt-3\t:"))


s1 = abs(((x2-x1)**2) + ((y2-y1)**2))**0.5
s2 = abs(((x2-x3)**2) + ((y2-y3)**2))**0.5
s3 = abs(((x3-x1)**2) + ((y3-y1)**2))**0.5

sp = (s1+s2+s3)/2

area = abs(sp*(sp-s1)*(sp-s2)*(sp-s3))

base = s2

print("Height of Triangle is ",round(((2*area)/base),2))
