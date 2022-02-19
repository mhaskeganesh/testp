/* Problem Statement
 *
 * Program0 -- Write a Program that prints the Series of palindrome ranging in 300 to 600
 *
 * */

//Import io package for all Input Output Operations
import java.io.*;

//User defined class to find Palindrome Number
class Palindrome {

	//Entry Point Function main, throws IOException as the readLine method of BufferedReader throws Exception
	public static void main(String[] args) throws IOException {

		//To make a connection between Java code and Keyboard for Input 
		BufferedReader b = new BufferedReader(new InputStreamReader(System.in));

		/*
		 * Declarations
		 * upper_limit - Integer type variable for end of Series
		 * lower_limit - Integer type variable for start of Series
		 * temp - To store a temporary number for calculations
		 * */
		int upper_limit = 0,temp = 0,lower_limit = 0;

		/*
		 * Use of do-while loop till all the conditions are true
		 * Condition 1 - All values should be greater than 0
		 * Condition 2 - Only Integer inputs are allowed
		 * */

		do {
			System.out.println("Enter Start Element and End Element of the Pallindrome Series");

			//Try-catch to Handle Character input 
			try {

				lower_limit = Integer.parseInt(b.readLine());
				upper_limit = Integer.parseInt(b.readLine());

				if(upper_limit <= 0 || lower_limit <= 0)
					System.out.println("Enter Positive Values only");

			}
			catch(NumberFormatException n){

				System.out.println("Invalid, Enter Numbers Only");
			}

		}while(upper_limit <= 0);

		//If Upper Limit is less than Lower Limit the Swap the Values
		if(upper_limit < lower_limit){

			temp = upper_limit;
			upper_limit = lower_limit;
			lower_limit = upper_limit;
		}

		System.out.printf("The Series of Pallindromes Between %d  and %d is\n",lower_limit,upper_limit);

		//For loop to check for all numbers in the range
		for(int lc = lower_limit; lc <= upper_limit; lc++){
			temp = lc;
			int rev = 0;

			//While loop to reverse the Number
			while(temp > 0){

				rev = (rev*10) + temp%10;
				temp/=10;
			};

			if(lc == rev)
				System.out.printf("%d\t",lc);
		}
		System.out.printf("\n");	

	}
}
