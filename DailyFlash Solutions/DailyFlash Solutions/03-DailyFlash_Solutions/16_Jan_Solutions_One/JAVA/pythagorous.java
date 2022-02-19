/*Program 1: Write a Program to take all three sides of a triangle from user and
check whether the triangle satisfies the Pythagorean Theorem.
Input:
Side 1 = 3
Side 2 = 4
Hypotenuse = 5
Output: Triangle Satisfies the Pythagorean Theorem.
*/


import java.io.BufferedReader;
import java.io.InputStreamReader;
import java.io.IOException;

class Pythagorous{
	
	//Here taking values from command line
	public static void main(String args[])throws IOException{
		
		int sides[] = new int[3];
		
		try{
			for(int i = 0 ; i<sides.length; i++){
			
				sides[i]=Integer.parseInt(args[i]); 
			}
		
			if(sides[0]*sides[0]+sides[1]*sides[1]==sides[2]*sides[2])
				System.out.println("Triangle satisfies");
			else
				System.out.println("Triangle not satisfies");	
		}catch( ArrayIndexOutOfBoundsException exception){
			
			System.out.println("Range Error: accepting value from command line given 0 in form(side1 side2 and hypo)");
		}	
	}	

}	
