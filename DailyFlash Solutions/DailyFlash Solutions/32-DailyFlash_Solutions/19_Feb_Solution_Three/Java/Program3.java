/* Problem Statement
 *
 * Program3 -- Write a Program to Print following Pattern.
 *	
 *		E	a	D	b	
 *			c	C	d	
 * 	 			B	e	
 *	 	 			f	
 *
 * */

//Import io package for all Input Output Operations
import java.io.*;

//User defined class to Print Pattern
class Pattern1 {

	//Entry Point Function main, throws IOException as the readLine method of BufferedReader throws Exception
	public static void main(String[] args) throws IOException {

		//To make a connection between Java code and Keyboard for Input 
		BufferedReader b = new BufferedReader(new InputStreamReader(System.in));

		/* 
		 * Declarations
		 * Integer Variables
		 * rows - To store User Input
		 *
		 * */

		int rows = 0,numCount = 0;

		/*
		 * Test Conditions
		 * Condition1 - Number Should be greater than 0 
		 * Condition2 - Character/String Input Not allowed
		 * 
		 * */

		//do-while loop to take user input till all conditions are true
		do {
			System.out.println("Enter Number of rows");

			//Try-catch to Handle Character input 
			try {
				rows = Integer.parseInt(b.readLine());

				if(rows <= 0)
					System.out.println("Invalid, Enter Positive Numbers Only");
			}
			catch(NumberFormatException n){

				System.out.println("Invalid, Enter Numbers Only");
			}

		}while(rows <= 0);

		for(int lc = 1; lc <= rows; lc+=2){

			numCount+=lc;
		}

		char odd = (char)(65 + numCount);
		char even = 'a';

		System.out.println("The output of Pattern is ");

		//Outer for loop is for Number of Rows
		for(int olc = 0; olc < rows; olc++){

			//Inner for loop is for Number of Columns
			for(int ilc = 0; ilc < rows; ilc++){

				if (ilc < olc)
					System.out.print(" \t");

				else{

					if(ilc%2 == 0) {
						System.out.print((char)odd+"\t");
						odd--;
					}
					else {

						System.out.print((char)even+"\t");
						even++;
					}
				}
			}
			System.out.println();	
		}
	}
}



