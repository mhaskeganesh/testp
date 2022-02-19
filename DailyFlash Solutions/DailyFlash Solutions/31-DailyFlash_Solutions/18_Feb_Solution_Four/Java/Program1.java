/*
 * Problem Statement
 *
 * 	Program1 -- Write a Program that sums up all the digits from an entered number and finds average of that sum and print them both.
*/

//Import io package for all Input Output Operations
import java.io.*;

//User defined class to Find sum and Average of the Digits of the Number
class SumAvg {

	//Entry Point Function main, throws IOException as the readLine method of BufferedReader throws Exception
	public static void main(String[] args) throws IOException {

		//To make a connection between Java code and Keyboard for Input 
		BufferedReader b = new BufferedReader(new InputStreamReader(System.in));

		/* 
		 * Declarations
		 * Integer Variables
		 * num_input_1 - To store User Input
		 * sum - to store the sum of the digits
		 * cnt - To keep a count on no of digits 
		 *
		 * */

		int num_input_1 = 0,temp,cnt = 0,sum = 0;

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

		//While loop to Calculate sum of Digits
		while(temp > 0){

			sum = sum + (temp%10);
			cnt++;
			temp/=10;
		}

		System.out.println("The Sum of Digits of Number "+num_input_1+" is "+sum+" and Average is "+((float)sum/cnt));
	}
}
