/* Problem Statement
 *
 * Program2 -- Write a Program that takes a number as input from user and prints it into words.
 *
 * */


//Import io package for all Input Output Operations
import java.io.*;

//User defined class to Print digit of Number in Words
class Digit {

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
		int num_input_1 = 0,temp = 0,digit;

		/*
		 * Use of do-while loop till all the conditions are true
		 * Condition 1 - All values should be greater than 0
		 * Condition 2 - Only Integer inputs are allowed
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

		temp = num_input_1;
		int rev = 0;

		//While loop to reverse the Number
		while(temp > 0){

			rev = (rev*10) + temp%10;
			temp/=10;
		};

		temp = rev;

		//While loop to Separate the digits of the input Number
		while(temp > 0){

			digit = temp%10;
			switch (digit) {

				case 0 : System.out.printf("Zero\t");
					 break;

				case 1 : System.out.printf("One\t");
					 break;

				case 2 : System.out.printf("Two\t");
					 break;

				case 3 : System.out.printf("Three\t");
					 break;

				case 4 : System.out.printf("Four\t");
					 break;

				case 5 : System.out.printf("Five\t");
					 break;

				case 6 : System.out.printf("Six\t");
					 break;

				case 7 : System.out.printf("Seven\t");
					 break;

				case 8 : System.out.printf("Eight\t");
					 break;

				case 9 : System.out.printf("Nine\t");
					 break;

				default : System.out.printf("Invalid\n");
					  break;
			}
			temp/=10;

		}
		System.out.println();
	}
}
