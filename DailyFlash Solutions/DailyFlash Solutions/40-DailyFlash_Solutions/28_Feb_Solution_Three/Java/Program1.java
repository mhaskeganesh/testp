/* Problem Statement
 *
 * Program1 -- Write a Program that calculates diameter of a circle if user provides circumference of the same circle. {Note: π = 3.142}
 *
 * */


//Import io package for all Input Output Operations
import java.io.*;

//User defined class to find Radius From Area
class Diameter {

	//Entry Point Function main, throws IOException as the readLine method of BufferedReader throws Exception
	public static void main(String[] args) throws IOException {

		//To make a connection between Java code and Keyboard for Input 
		BufferedReader b = new BufferedReader(new InputStreamReader(System.in));

		/*
		 * Declarations
		 * circum = To store user input for circum of Circle
		 *
		 * */
		float circum = 0,diameter = 0;

		/*
		 * Use of do-while loop till all the conditions are true
		 * Condition 1 - All values should be greater than 0
		 * Condition 2 - Only Integer inputs are allowed
		 * */

		//do-while loop to take user input till all conditions are true
		do {
			System.out.println("Enter Circumference of Circle");

			//Try-catch to Handle Character input 
			try {
				circum = Float.parseFloat(b.readLine());

				//Message to Print if The number is less than or equal to zero
				if(circum <= 0)
					System.out.println("Invalid, Enter Positive Numbers Only");
			}
			catch(NumberFormatException n){

				System.out.println("Invalid, Enter Numbers Only");
			}

		}while(circum <= 0);

		diameter = (circum/3.142f);
		System.out.printf("Diameter Of Circle is %.2f \n",diameter);	
	}
	
}
