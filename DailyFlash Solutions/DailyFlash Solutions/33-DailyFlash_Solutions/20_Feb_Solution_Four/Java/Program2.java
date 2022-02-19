/* Problem Statement
 *
 *  Program2 -- Write a Program to print AP in reverse order take last Element & Common Difference from user. {Note: Use While Loop}
 *
 * */

//Import io package for all Input Output Operations
import java.io.*;

//User defined class to find sum of a Arithmetic Progression
class ArithmeticProgression {

	//Entry Point Function main, throws IOException as the readLine method of BufferedReader throws Exception
	public static void main(String[] args) throws IOException {

		//To make a connection between Java code and Keyboard for Input 
		BufferedReader b = new BufferedReader(new InputStreamReader(System.in));

		/*
		 * Declarations
		 * last - Integer type variable for user input for last element
		 * com_dif - Integer type variable for user input for Common Difference
		 * element - to calculate the element in the AP
		 * */
		int last = 0,com_dif = 0,element = 0,tmp = 0;
		boolean flag = true;

		/*
		 * Use of do-while loop till all the conditions are true
		 * Condition 1 - All values should be greater than 0
		 * Condition 2 - Only Integer inputs are allowed
		 * */

		do {
			System.out.println("Enter Last element and Common-difference and Number of elements of the AP in this Order only");

			if(flag){
				//Try-catch to Handle Character input 
				try {

					flag = false;
					last = Integer.parseInt(b.readLine());
					com_dif = Integer.parseInt(b.readLine());

				}
				catch(NumberFormatException n){

					System.out.println("Invalid, Enter Numbers Only");
					flag = true;
				}
			}
			else
				flag = false;

		}while(flag);

		tmp = com_dif < 0 ? com_dif = -com_dif : 1 ;
		tmp = last < 0 ? last = -last : 1 ;

		System.out.printf("The Reverse Arithmentic Progression with\nLast = %d\tand Common Difference = %d is\n",last,com_dif);

		element = last;
		//Calculate and print the elements of the AP upto the count
		while((element-com_dif) >= 0){

			System.out.printf("%d\t",element);
			element-=com_dif;
		}
		System.out.printf("\n");

	}
}
