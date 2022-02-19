/* Problem Statement
 *
 * Program0 -- Write a Program that prints the Harshad numbers ranging in 1 to 100.
 *
 * */

//Import io package for all Input Output Operations
import java.io.*;

//User defined class to find Harshad Number
class Harshad {

	//Entry Point Function main, throws IOException as the readLine method of BufferedReader throws Exception
	public static void main(String[] args) throws IOException {

		//To make a connection between Java code and Keyboard for Input 
		BufferedReader b = new BufferedReader(new InputStreamReader(System.in));

		/*
		 * Declarations
		 * num_input_1 - Integer type variable for user input
		 * temp - To store a temporary number for calculations
		 * sum - To store sum of the digits of the Number
		 * */
		int num_input_1 = 0,temp = 0,sum = 0;

		/*
		 * Use of do-while loop till all the conditions are true
		 * Condition 1 - All values should be greater than 0
		 * Condition 2 - Only Integer inputs are allowed
		 * */

		do {
			System.out.println("Enter Last Element of the Harshad Series ");

			//Try-catch to Handle Character input 
			try {

				num_input_1 = Integer.parseInt(b.readLine());

				if(num_input_1 <= 0)
					System.out.println("Enter Positive Values only");

			}
			catch(NumberFormatException n){

				System.out.println("Invalid, Enter Numbers Only");
			}

		}while(num_input_1 <= 0);

		System.out.printf("The Series of Harshad Number upto %d is\n",num_input_1);

		//For loop to check for all numbers in the range
		for(int lc = 1; lc <= num_input_1; lc++){
			temp = lc;
			sum = 0;

			//While loop to Calculate sum of the digits of the input Number
			while(temp > 0){

				sum = sum +  temp%10;
				temp/=10;
			}

			//If-else to check for Harshad Number
			if((lc % sum) == 0)
				System.out.printf("%d\t",lc);
		}
		System.out.printf("\n");	

	}
}
