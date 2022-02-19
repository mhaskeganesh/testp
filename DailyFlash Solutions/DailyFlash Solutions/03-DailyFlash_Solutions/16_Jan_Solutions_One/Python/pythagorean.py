"""

/*Program 1: Write a Program to take all three sides of a triangle from user and
check whether the triangle satisfies the Pythagorean Theorem.
Input:
Side 1 = 3
Side 2 = 4
Hypotenuse = 5
Output: Triangle Satisfies the Pythagorean Theorem.
*/

"""

side1 = input("Enter the side one  : ")
side2 = input("Enter the side two  : ")
hypo  = input("Enter the hypo      : ")


if side1*side1 + side2*side2 == hypo*hypo:
    print("Triangle satisfies pythagorean")
else:
    print("Triangle not satifies the pythagorean")


    

