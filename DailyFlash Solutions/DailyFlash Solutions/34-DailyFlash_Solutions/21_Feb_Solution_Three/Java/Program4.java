/* Problem Statement
 *
 * Program4 -- Write a Program to check whether a number can be express as sum of two prime numbers.
 *
 * */

//Import io package for all Input Output Operations
import java.io.*;

//User defined class to check sum of two prime numbers
class PrimeSum {

	//Entry Point Function main, throws IOException as the readLine method of BufferedReader throws Exception
	public static void main(String[] args) throws IOException {

		//To make a connection between Java code and Keyboard for Input 
		BufferedReader b = new BufferedReader(new InputStreamReader(System.in));

		/*
		 * Declarations
		 * num_input_1 - Integer type variable for user input
		 * digit - to store each digit of a number
		 * temp - To store a temporary number for calculations
		 * pc - Counter 
		 * cnt - Counter
		 *
		 * */
		int num_input_1 = 0,temp = 0,digit,pc = 0,cnt = 0;

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

		int arr_size = num_input_1/2;
		int prime[] = new int[arr_size];


		//For loop to find all prime numbers within the Range of Input Number
		for(int olc = 2; olc < num_input_1; olc++){

			cnt = 0;
			for(int ilc = 2; ilc < olc; ilc++){

				if(olc % ilc == 0)
					cnt++;
			}

			if (cnt == 0){

				prime[pc] = olc;
				pc++;
			}
		}

		//For loops to check if the Number can be represented as the sum of two prime numbers
		for(int olc = 0; prime[olc] != 0; olc++){

			for(int ilc = olc; prime[ilc] != 0; ilc++){

				if((prime[olc] + prime[ilc]) == num_input_1){

					System.out.printf("%d = %d + %d\n",num_input_1,prime[olc],prime[ilc]);
					break;
				}
				else if((prime[olc] + prime[ilc]) >= num_input_1){

					break;
				}
			}
		}
	}
}
