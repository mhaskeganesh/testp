"""

Program 3: Write a Program to Find whether the character is an alphabet, a
digit or a special character
Input: *
Output: * is a Special Character.

"""


ch='5'

if (ch>='a'and ch<='z')or(ch>='A' and ch<='Z'):
    print(ch+" is alphabet")
elif ch>='0' and ch<=9:
    print(ch+" is digit")
else:
    print(ch+" is special character")
