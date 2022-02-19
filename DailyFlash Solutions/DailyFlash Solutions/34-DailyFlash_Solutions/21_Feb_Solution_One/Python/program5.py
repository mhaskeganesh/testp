
def primeOrNot(num):

    for itr in range(2,(num/2)+1):
        if num%itr ==0:
            return 0;
    return 1;    



num = input("Enter the number : ")

flag = 0
for itr in range(2,(num/2)+1):
    
    if primeOrNot(itr)==1:
        if primeOrNot(num-itr)==1:
            print(str(num)+" = "+str(num-itr)+" + "+str(itr))
            flag =1

if flag ==0:
    print(str(num)+" cannot express as the sum of two prime ")
