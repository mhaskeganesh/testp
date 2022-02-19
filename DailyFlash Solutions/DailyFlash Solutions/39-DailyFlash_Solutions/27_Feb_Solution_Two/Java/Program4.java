/* Problem Statement
 *
 * Program4 -- Write a Program calculates slope of a line if user provides the Two Points A & B of that line.
 *
 * */


//Import io package for all Input Output Operations
import java.io.*;

//User defined class to Find Slope of Line
class Slope {

	//Entry Point Function main, throws IOException as the readLine method of BufferedReader throws Exception
	public static void main(String[] args) throws IOException {

		//To make a connection between Java code and Keyboard for Input 
		BufferedReader b = new BufferedReader(new InputStreamReader(System.in));

		/*
		 * Declarations
		 * Boolean
		 * flag1 and flag2 to Control Inputs for Two different Points
		 *
		 * Float
		 * x1 = X Co-ordinate of Point 1
		 * y1 = Y Co-ordinate of Point 1
		 * x2 = X Co-ordinate of Point 2
		 * y2 = Y Co-ordinate of Point 2
		 * slope - Slope of Line (Point 1 and 2)
		 * */
		float x1 = 0,x2 = 0,y1 = 0, y2 = 0, slope = 0;
		boolean flag1 = true, flag2 = true;

		/*
		 * Use of do-while loop till all the conditions are true
		 * Condition 1 - All values should be greater than 0
		 * Condition 2 - Only Integer inputs are allowed
		 * */

		//do-while loop to take user input till all conditions are true
		do {
			if(flag1){

				System.out.println("Enter X Co-ordinate and Y Co-ordinate of Point-1");

				//Try-catch to Handle Character input 
				try {

					x1 = Float.parseFloat(b.readLine());
					y1 = Float.parseFloat(b.readLine());
				}
				catch(NumberFormatException n){

					flag1 = true;
					System.out.println("Invalid, Enter Numbers Only");
				}
				flag1 = false;
			}

			if(flag2){

				System.out.println("Enter X Co-ordinate and Y Co-ordinate of Point-2");

				//Try-catch to Handle Character input 
				try {

					x2 = Float.parseFloat(b.readLine());
					y2 = Float.parseFloat(b.readLine());
				}
				catch(NumberFormatException n){

					flag2 = true;
					System.out.println("Invalid, Enter Numbers Only");
				}
				flag2 = false;
			}

		}while(flag1 && flag2);

		//Calculate Slope
		slope = (y2 - y1)/(x2 - x1);

		System.out.printf("The Slope of Line is = %.2f\n",slope);
	}
}
