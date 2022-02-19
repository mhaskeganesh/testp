/* Problem Statement
 *
 * Program2 -- Write a Program that accepts a number from user and prints second minimum digit from that number.
 *
 * */


//Import io package for all Input Output Operations
import java.io.*;

//User defined class to find minimum digit in a Number
class MinDigit {

	//Entry Point Function main, throws IOException as the readLine method of BufferedReader throws Exception
	public static void main(String[] args) throws IOException {

		//To make a connection between Java code and Keyboard for Input 
		BufferedReader b = new BufferedReader(new InputStreamReader(System.in));

		/*
		 * Declarations
		 * num_input_1 - Integer type variable for user input
		 * digit - to store each digit of a number
		 * temp - To store a temporary number for calculations
		 *
		 * */
		int num_input_1 = 0,temp = 0,digit = 0,min = 9,min2 = 9;

		/*
		 * Use of do-while loop till all the conditions are true
		 * Condition 1 - All values should be greater than 0
		 * Condition 2 - Only Integer inputs are allowed
		 * */

		//do-while loop to take user input till all conditions are true
		do {
			System.out.println("Enter A Number");

			//Try-catch to Handle Character input 
			try {
				num_input_1 = Integer.parseInt(b.readLine());

				//Message to Print if The number is less than or equal to zero
				if(num_input_1 <= 0)
					System.out.println("Invalid, Enter Positive Numbers Only");
			}
			catch(NumberFormatException n){

				System.out.println("Invalid, Enter Numbers Only");
			}

		}while(num_input_1 <= 0);

		temp = num_input_1;

		//While Loop to Separate Each digit and check for minimum Digit
		while(temp > 0){

			digit = temp%10;
			if (min > digit){
				min2 = min;
				min = digit;
			}
			else if(min2 > digit)
				min2 = digit;
			temp/=10;
		}
		System.out.printf("Second Minimum Digit of %d is %d\n",num_input_1,min2);	
	}
}
