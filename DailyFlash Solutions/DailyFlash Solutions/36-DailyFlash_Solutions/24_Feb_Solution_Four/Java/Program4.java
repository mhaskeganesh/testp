/* Problem Statement
 *
 * Program4 -- Write a Program that prints frequency of each unique digit from a number provided by user.
 *
 * */


//Import io package for all Input Output Operations
import java.io.*;
import java.util.*;

//User defined class to check frequency of digit in a Number
class Frequency {

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
		int num_input_1 = 0,temp = 0,digit = 0;

		/*
		 * Use of do-while loop till all the conditions are true
		 * Condition 1 - All values should be greater than 0
		 * Condition 2 - Only Integer inputs are allowed
		 * */

		//do-while loop to take user input till all conditions are true
		do {
			System.out.println("Enter A Number to Check frequency of Digits");

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

		//Integer array to Store count of Each Digit
		int digits[] = new int[10];

		//Initialise all Elements of Array to Zero
		Arrays.fill(digits,0);

		//While Loop to Separate Each digit and Keep Count in an Array
		while(temp > 0){

			digit = temp%10;
			digits[digit]++;
			temp/=10;
		}

		//For Loop to print the count of Each digit
		for(int lc = 0; lc < 10; lc++){

			//If-else to check if the digit is Present, and then print its count
			if(digits[lc] != 0){

				System.out.printf("Frequency of %d is %d\n",lc,digits[lc]);
			}
		}
	}
}
