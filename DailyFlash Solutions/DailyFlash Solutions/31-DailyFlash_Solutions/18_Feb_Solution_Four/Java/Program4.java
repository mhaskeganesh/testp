/*
 * Problem Statement
 *
 * Program4 -- Write a Program that takes a number as input from user and prints only those digits from that number, which are perfect divisors of the actual number
 * */

//Import io package for all Input Output Operations
import java.io.*;

//User defined class to Print digits which are perfect divisors of the Number
class Perfect {

	//Entry Point Function main, throws IOException as the readLine method of BufferedReader throws Exception
	public static void main(String[] args) throws IOException {

		//To make a connection between Java code and Keyboard for Input 
		BufferedReader b = new BufferedReader(new InputStreamReader(System.in));

		/* 
		 * Declarations
		 * Integer Variables
		 * num_input_1 - To store User Input
		 * temp - temporary variable required for operations
		 * rev - To store the reversed Number
		 *
		 * */

		int num_input_1 = 0,rev = 0,temp;

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

				//Message to Print if The number is less than or equal to zero
				if(num_input_1 <= 0)
					System.out.println("Invalid, Enter Positive Numbers Only");
			}
			catch(NumberFormatException n){

				System.out.println("Invalid, Enter Numbers Only");
			}

		}while(num_input_1 <= 0);

		System.out.println("The Digits which are Perfect Divisors of number "+num_input_1+" are ");
		temp = num_input_1;
		rev = 0;

		//While loop to reverse the Number
		while(temp > 0){

			rev = (rev*10) + temp%10;
			temp/=10;
		}

		temp = rev;

		//While loop to separate each digit of the number and check for perfect divisors
		while(temp > 0){

			if((num_input_1 % (temp%10) == 0))
				System.out.print((temp%10)+" ");
			temp/=10;
		}
		System.out.println();
	}
}
