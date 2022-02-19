/* Problem Statement
 *
 * Program2 -- Write a Program that calculates radius of a circle if user provides the area covered by that circle.
 *
 * */


//Import io package for all Input Output Operations
import java.io.*;

//User defined class to find Radius From Area
class Radius {

	//Entry Point Function main, throws IOException as the readLine method of BufferedReader throws Exception
	public static void main(String[] args) throws IOException {

		//To make a connection between Java code and Keyboard for Input 
		BufferedReader b = new BufferedReader(new InputStreamReader(System.in));

		/*
		 * Declarations
		 * area = To store user input for area of Circle
		 *
		 * */
		float area = 0,radius = 0;

		/*
		 * Use of do-while loop till all the conditions are true
		 * Condition 1 - All values should be greater than 0
		 * Condition 2 - Only Integer inputs are allowed
		 * */

		//do-while loop to take user input till all conditions are true
		do {
			System.out.println("Enter A Number");

			//Try-catch to Handle Character input 
			try {
				area = Float.parseFloat(b.readLine());

				//Message to Print if The number is less than or equal to zero
				if(area <= 0)
					System.out.println("Invalid, Enter Positive Numbers Only");
			}
			catch(NumberFormatException n){

				System.out.println("Invalid, Enter Numbers Only");
			}

		}while(area <= 0);

		radius = Radius.squareRoot(area/3.142f);
		System.out.printf("Radius Of Circle is %.2f \n",radius);	
	}
	
	static float squareRoot(float num) {

	float root = 0, inter = 0, acuracy = 0;
	root = (float)(num / 2);
	acuracy = 0.00001f;
	while((float)(Math.abs(root*root - num)) > acuracy){
		inter = (float)(num / root);
		root = (float)((root + inter )/2);
	}
	
	return root;
}
}
