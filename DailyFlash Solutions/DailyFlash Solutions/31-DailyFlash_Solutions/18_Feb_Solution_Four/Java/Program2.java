/*
 * Problem Statement
 *
 * 	Program2 -- Write a Program to find circumference of a Circle of radius entered by user. 
 * 	{Note: The formula to determine Circumference of Circle is 2πr. Where π = 3.142}
 */

//Import io package for all Input Output Operations
import java.io.*;

//User defined class to Circumference of Circle
class Circum {

	//Entry Point Function main, throws IOException as the readLine method of BufferedReader throws Exception
	public static void main(String[] args) throws IOException {

		//To make a connection between Java code and Keyboard for Input 
		BufferedReader b = new BufferedReader(new InputStreamReader(System.in));

		/* 
		 * Declarations
		 * Float Variables
		 * radius - To store User Input
		 *
		 * */

		float radius = 0;

		/*
		 * Test Conditions
		 * Condition1 - Number Should be greater than 0 
		 * Condition2 - Character/String Input Not allowed
		 * 
		 * */

		//do-while loop to take user input till all conditions are true
		do {
			System.out.println("Enter the Radius of Circle ");

			//Try-catch to Handle Character input 
			try {
				radius = Float.parseFloat(b.readLine());

				if(radius <= 0)
					System.out.println("Invalid, Enter Positive Numbers Only");
			}
			catch(NumberFormatException n){

				System.out.println("Invalid, Enter Numbers Only");
			}

		}while(radius <= 0);

		//Print the Circumference of the Circle
		System.out.println("The Circumference of Circle is "+(2*3.142*radius));
	}
}
