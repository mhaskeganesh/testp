/* Problem Statement
 *
 * Write a Program that computes Cartesian space value of a point P(x, y) if user provides that radius and angle of that point in Polar coordinates space.
 * {Note: Considered 2D polar space then x & y values for Cartesian space computed as, x = r * cos (θ) & y = r * sin (θ)}
 *
 * */


//Import io package for all Input Output Operations
import java.io.*;

//User defined class to find Cartesian Co-ordinates
class Cartesian {

	//Entry Point Function main, throws IOException as the readLine method of BufferedReader throws Exception
	public static void main(String[] args) throws IOException {

		//To make a connection between Java code and Keyboard for Input 
		BufferedReader b = new BufferedReader(new InputStreamReader(System.in));

		/*
	 * Declarations
	 * Integer
	 * angle - Integer type variable for user input for angle in degres
	 * radius - Integer type variable for user input for Radius
	 * 
	 * Float
	 * x - To store Cartesian X - Co-ordinate
	 * y - To store Cartesian Y - Co-ordinate
	 * */
	int angle = 0,radius = 0;
	double x,y;

	/*
	 * Use of do-while loop till all the conditions are true
	 * Condition 1 - Only Integer inputs are allowed
	 * */

		do {
			System.out.println("Enter Angle and Radius of the Point in the Polar Coordinate Space");

			//Try-catch to Handle Character input 
			try {
				angle = Integer.parseInt(b.readLine());
				radius = Integer.parseInt(b.readLine());

			}
			catch(NumberFormatException n){

				System.out.println("Invalid, Enter Numbers Only");
			}

		}while(angle <= 0 && radius <= 0);
		
		//If Radius is Negative make it positive 
		int temp = radius < 0 ? radius = -radius : 1 ;

		//Convert the Entered Angle in Radians since sin and cos function arguments consider it in radians
		double deg = angle * (3.142/180);
		
		//Calculate X and Y Co-ordinates in the co-ordinate space
		x = radius * (Math.cos(deg));
		y = radius * (Math.sin(deg));

		System.out.println("The Cartesian Coordinates are\nX = "+String.format("%.2f",x)+"\nY = "+String.format("%.2f",y));
	}
}
