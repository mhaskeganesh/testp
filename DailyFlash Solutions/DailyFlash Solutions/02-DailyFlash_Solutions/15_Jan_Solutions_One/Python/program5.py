
print("Enter angles of triangle in Degree : ")

a, b, c = [int(a) for a in raw_input().split()]

if(a +  b + c == 180):
	print("Valid triangle")
	
else :
	print("not Valid triangle")

# Give space after each input
# 60 60 60