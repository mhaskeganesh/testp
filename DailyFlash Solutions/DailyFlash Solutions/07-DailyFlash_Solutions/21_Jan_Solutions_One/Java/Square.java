/*Program 1: Write a program to print squares of first 10 numbers.
Output:
Square of 1 : 1
Square of 2: 4
Square of 3 : 9
.
.
.
Square of 1 0 : 1 00

*/

class Square{
	
	public static void main(String args[]){
		
		for(int itr = 1 ;itr <= 10 ; itr++){

			System.out.printf("Square of %d is %d \n",itr,itr*itr);
		}	
	}	

}	
