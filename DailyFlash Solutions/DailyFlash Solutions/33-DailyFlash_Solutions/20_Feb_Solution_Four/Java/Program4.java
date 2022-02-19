/* Problem Statement
 *
 * Program4 -- Write a Program that takes a number as input from user and prints only perfect digits if it have any else prints appropriate message.
 *
 * */

//Import io package for all Input Output Operations
import java.io.*;

//User defined class to Print Perfect digit of Number
class PerfectDigit {

	//Entry Point Function main, throws IOException as the readLine method of BufferedReader throws Exception
	public static void main(String[] args) throws IOException {

		//To make a connection between Java code and Keyboard for Input 
		BufferedReader b = new BufferedReader(new InputStreamReader(System.in));

		/*
		 * Declarations
		 * num_input_1 - Integer type variable for user input
		 * digit - to store each digit of a number
		 * temp - To store a temporary number for calculations
		 * cnt - Counter to count Number of Perfect Digits
		 * sum - To calculate sum of the divisors
		 *
		 * */
		int num_input_1 = 0,temp = 0,digit,cnt = 0,sum = 0;

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
			sum = 0;

			//For loop to find the divisors of the Digits and calculate its sum
			for(int lc = 1; lc < digit; lc++){

				if(digit % lc == 0)
					sum+=lc;
			}

			//Check for Perfect digits
			if(digit != 0 && sum == digit){

				cnt++;
				System.out.println("Perfect Digit : "+digit);
			}
			temp/=10;

		}


		//If no perfect digits are found the print the message
		System.out.println(cnt == 0 ?("The number "+num_input_1+"  does not have any digit, which is perfect in nature"):"");
	}
}
