'''

Program0 -- Write a Program that prints the Series of palindrome ranging in 300 to 600

'''

start = int(input("Enter Start Element for Palindrome Series\t:"))
end = int(input("Enter End Element for Palindrome Series\t:"))

def Check_Palindrome(num):

    num = str(num)
    rev = num[::-1]
    rev = int(rev)
    num = int(num)

    if num == rev :
        print(num,end="\t")

for x in range(start,end+1):
    Check_Palindrome(x)
print()
