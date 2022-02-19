/* Problem Statement
 *
 * Program1 -- Write a Program that calculates Square Root of a number entered by user.
 * {Note: Do not use library functions}
 *
 * */

//Import io package for all Input Output Operations
import java.io.*;

//User defined class to Find Square Root of a Number
class SquareRoot {

	//Entry Point Function main, throws IOException as the readLine method of BufferedReader throws Exception
	public static void main(String[] args) throws IOException {

		//To make a connection between Java code and Keyboard for Input 
		BufferedReader b = new BufferedReader(new InputStreamReader(System.in));

		SquareRoot sr = new SquareRoot();

		/* 
		 * Declarations
		 * Integer Variables
		 * num_input_1 - To store User Input
		 * */

		int num_input_1 = 0;

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

		int sqrt = sr.root(num_input_1,2);
		if(sqrt > 0)
			System.out.printf("Square Root of %d is %d\n",num_input_1,sqrt);
		else
			System.out.printf("The Number %d is not a perfect Square\n",num_input_1);

	}


	/*
	 * root function to calculate root of form number to the index'th order
	 * Function name - root
	 * Function return type - int
	 * Function arguments - int,int
	 * 	1) number - The number whose root need to be calculated
	 * 	2) index - The value of the order
	 * */

	int root(int number, int index){

		int answer = 0;

		for(int lc = 1; lc <= number; lc++){

			float temp = number;
			int cnt = index;
			while(cnt > 1){

				temp/=lc;
				cnt--;
			}
			if(temp == lc){

				answer = lc;
				break;
			}
			else 
				answer = 0;
		}
		return answer;
	}
}
