/*
 * Problem Statement
 *
 * 	Program1 -- Write a Program that prints Binary of Each Digit from entered Number.
 */

//Import io package for all Input Output Operations
import java.io.*;

//User defined class to Find Binary Value of Digits of the Number
class Binary {

	//Entry Point Function main, throws IOException as the readLine method of BufferedReader throws Exception
	public static void main(String[] args) throws IOException {

		//To make a connection between Java code and Keyboard for Input 
		BufferedReader b = new BufferedReader(new InputStreamReader(System.in));

		/* 
		 * Declarations
		 * Integer Variables
		 * num_input_1 - To store User Input
		 * rev - to store reversed Number
		 * */

		int num_input_1 = 0,temp,rev = 0;

		/*
		 * Test Conditions
		 * Condition1 - Number Should be greater than 0 
		 * Condition2 - Character/String Input Not allowed
		 * 
		 * */

		//do-while loop to take user input till all conditions are true
		do {
			System.out.println("Enter A Number ");

			//Try-catch to Handle Character input 
			try {
				num_input_1 = Integer.parseInt(b.readLine());

				if(num_input_1 <= 0)
					System.out.println("Invalid, Enter Positive Numbers Only");
			}
			catch(NumberFormatException n){

				System.out.println("Invalid, Enter Numbers Only");
			}

		}while(num_input_1 <= 0);

		temp = num_input_1;
		while(temp > 0){

			rev = (rev*10) + temp%10;
			temp/=10;
		};

		temp = rev;
		//While loop to Print Binary value of each Digit
		while(temp > 0){

			System.out.println("Binary Value of "+(temp%10)+" : "+Integer.toBinaryString(temp%10));
			temp/=10;
		}

	}
}
