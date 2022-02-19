def isPalindrome(num):
    rev = 0
    temp = num
    while(temp != 0):
        rev = rev * 10 + temp % 10
        temp = int(temp / 10)
    if(rev == num):
        return True
    return False
while(True):
    num = int(input("Enter num : "))
    if(isPalindrome(num)):
        break
    print(num)
