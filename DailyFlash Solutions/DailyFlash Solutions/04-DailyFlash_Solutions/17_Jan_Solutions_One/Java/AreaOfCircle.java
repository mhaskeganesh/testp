/*Program 1: Write a Program to calculate area of circle.*/

import java.io.*;


class AreaOfCircle{
	
	public static void main(String args[])throws IOException{

		BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
		System.out.println("Enter the radius of circle\n");

		int radius = Integer.parseInt(br.readLine());

		System.out.printf("Area of circle is %f",3.14*radius*radius);
		

	}	
}	
