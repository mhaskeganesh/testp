/* Problem Statement
 *
 * Program0 -- Write a Program that computes Cartesian space value of a point P(x, y, z) if user provides that radius, theta theta (θ) & theta phi (φ) of that point in Polar coordinates space.
{Note: Considered 3D polar space then x, y, & z values for Cartesian space computed as, x = r * sin (θ) * cos (φ), y = r * sin (θ) * sin (φ) & z = r * cos (θ)}
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
	 * theta - Integer type variable for user input for theta in degres
	 * phi - Integer type variable for user input for phi in degres
	 * radius - Integer type variable for user input for Radius
	 * 
	 * Float
	 * x - To store Cartesian X - Co-ordinate
	 * y - To store Cartesian Y - Co-ordinate
	 * z - To store Cartesian Z - Co-ordinate
	 * */
	int theta = 0,radius = 0,phi = 0;
	double x,y,z;

	/*
	 * Use of do-while loop till all the conditions are true
	 * Condition 1 - Only Integer inputs are allowed
	 * */

		do {
			System.out.println("Enter Angle Theta, Angle Phi and Radius of the Point in the Polar Co-ordinate Space");

			//Try-catch to Handle Character input 
			try {
				
				theta = Integer.parseInt(b.readLine());
				phi = Integer.parseInt(b.readLine());
				radius = Integer.parseInt(b.readLine());

			}
			catch(NumberFormatException n){

				System.out.println("Invalid, Enter Numbers Only");
			}

		}while(theta <= 0 && radius <= 0);
		
		//If Radius is Negative make it positive 
		int temp = radius < 0 ? radius = -radius : 1 ;

		//Convert the Entered Angle in Radians since sin and cos function arguments consider it in radians
		double degtheta = theta * (3.142/180);
		double degphi = phi * (3.142/180);
		
		//Calculate X and Y Co-ordinates in the co-ordinate space
		x = radius * (Math.sin(degtheta)) * (Math.cos(degphi));
		y = radius * (Math.sin(degtheta)) * (Math.sin(degphi));
		z = radius * (Math.cos(degtheta));

		System.out.println("The Cartesian Coordinates are\nX = "+String.format("%.2f",x)+"\nY = "+String.format("%.2f",y)+"\nZ = "+String.format("%.2f",z));
	}
}
