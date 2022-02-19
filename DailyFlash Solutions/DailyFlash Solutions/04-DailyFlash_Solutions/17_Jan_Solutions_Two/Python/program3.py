
def check(age, sex, status) :

	if(sex == 'f' or sex == 'F'):
		print("She will work in Urban areas")
	elif(age >= 20 and age <= 40):
		print("He will work in any areas")
	else :
		print("He will work in urban areas")
	

print("Enter age, sex(m/f), Marital Status(y/n)")

try:
	age = int(raw_input())
	sex = raw_input()
	status = raw_input()

except ValueError as e:
	print("Error")
	exit(0)

if(age < 20 or age > 60 or (sex != 'f' and sex != 'F' and sex != 'm' and sex != 'M') or (status != 'y' and status != 'Y' and status != 'n' and status != 'N')):

	print("Error")
	
else:
	check(age, sex, status)
	

