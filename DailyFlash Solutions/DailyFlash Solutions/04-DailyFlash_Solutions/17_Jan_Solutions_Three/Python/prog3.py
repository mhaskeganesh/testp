sex = input("Sex : ")
age = int(input("Age : "))
if((sex == 'M' or sex == 'F' or sex == 'm' or sex == 'f') and (age >= 20 and age <= 60)):
    if(sex == 'F' or sex == 'f' or (sex == 'M' or sex == 'm' and age > 40 and age <= 60)):
        print("Work in arban areas.")
    elif(sex == 'M' or sex == 'm' and (age >= 20 and age <= 40)):
        print("Work anywhere.") 
else:
    print("Error.")
