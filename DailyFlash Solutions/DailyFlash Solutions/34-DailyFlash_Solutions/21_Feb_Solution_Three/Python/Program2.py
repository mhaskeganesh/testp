'''
Write a Program that takes a number as input from user and prints
it into words.
'''
def number_to_string(i):
        switcher={
                0:'Zero',
                1:'One',
                2:'Two',
                3:'Three',
                4:'Four',
                5:'Five',
                6:'Six',
                7:'seven',
                8:'Eight',
                9:'Nine'
             }
        return switcher.get(i,"Invalid day of week")

num=input("Enter the number:")
u=len(num)
temp=int(num)
while(temp > 0):
    i=(temp //(10 **(u-1)))
    print (number_to_string(i),end=" ")
    temp=(temp % (10 **(u-1)))
    u=u-1
print()

