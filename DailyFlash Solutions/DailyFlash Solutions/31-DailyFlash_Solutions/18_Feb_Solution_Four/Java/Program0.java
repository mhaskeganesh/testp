/* Problem Statement
 *
 * Program0 -- Write a Program to print an Arithmetic Progression (A.P.) series. Take Starting element, Total count of elements in A.P. & the Common Difference from user.
 * {Note: an AP (i.e. Arithmetic Progression is such series which has common difference between every consecutive elements, AP of common difference 2 starting from 20 can be: 20, 22, 24, 26 . . .}
 *
 * */

//Import io package for all Input Output Operations
import java.io.*;

//User defined class to find sum of a series
class ArithmeticProgression {

	//Entry Point Function main, throws IOException as the readLine method of BufferedReader throws Exception
	public static void main(String[] args) throws IOException {

		//To make a connection between Java code and Keyboard for Input 
		BufferedReader b = new BufferedReader(new InputStreamReader(System.in));

		/*
		 * Declarations
		 * start - Integer type variable for user input for start element
		 * com_dif - Integer type variable for user input for Common Difference
		 * count - Integer type variable for user input for Number of elements
		 * */
		int start = 0,com_dif = 0,count = 0,flag = 1;

		/*
		 * Use of do-while loop till all the conditions are true
		 * Condition 1 - Count Should Be greater than 0
		 * Condition 2 - Only Integer inputs are allowed
		 * */

		do {
			System.out.println("Enter Start element and Common-difference and Number of elements of the AP in this Order only");

			//Try-catch to Handle Character input 
			try {
				start = Integer.parseInt(b.readLine());
				com_dif = Integer.parseInt(b.readLine());
				count = Integer.parseInt(b.readLine());

				//Message to Print if The number is less than or equal to zero
				if(count <= 0)
					System.out.println("Number of Elements cannot be Negative or Zero");
			}
			catch(NumberFormatException n){

				System.out.println("Invalid, Enter Numbers Only");
			}

		}while(count <= 0);

		System.out.println("The Arithmentic Progression with\nStart = "+start+"\t"+"Number of Elements = "+count+"\tand Common Difference = "+com_dif+" is");

		//Calculate and print the elements of the AP upto the count
		for(int lc = 0; lc < count; lc++){

			System.out.print((start + (com_dif*lc))+"\t");
		}
		System.out.println();
	}
}
