/*
 * Problem Statement
 *
 * 	Program2 -- Write a Program to find radius of a circle if user provides circumference of that same circle.
 */

//Import io package for all Input Output Operations
import java.io.*;

//User defined class to find Radius of Circle
class Radius {

	//Entry Point Function main, throws IOException as the readLine method of BufferedReader throws Exception
	public static void main(String[] args) throws IOException {

		//To make a connection between Java code and Keyboard for Input 
		BufferedReader b = new BufferedReader(new InputStreamReader(System.in));

		/* 
		 * Declarations
		 * Float Variables
		 * circum - To store User Input
		 *
		 * */

		float circum = 0;

		/*
		 * Test Conditions
		 * Condition1 - Number Should be greater than 0 
		 * Condition2 - Character/String Input Not allowed
		 * 
		 * */

		//do-while loop to take user input till all conditions are true
		do {
			System.out.println("Enter the Circumference of Circle ");

			//Try-catch to Handle Character input 
			try {
				circum = Float.parseFloat(b.readLine());

				if(circum <= 0)
					System.out.println("Invalid, Enter Positive Numbers Only");
			}
			catch(NumberFormatException n){

				System.out.println("Invalid, Enter Numbers Only");
			}

		}while(circum <= 0);

		//Print the Radius of the Circle
		System.out.println("The Radius of Circle is "+String.format("%.2f",(circum/(2*3.142))));
	}
}
