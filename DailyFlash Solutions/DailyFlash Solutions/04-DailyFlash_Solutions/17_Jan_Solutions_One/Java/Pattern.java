/*
Program 4: Write a Program to Print following Pattern
2 4 6 8
2 4 6 8
2 4 6 8
2 4 6 8

*/

import java.io.*;

class Pattern{
	
	public static void main(String args[])throws IOException{
		for(int outerItr = 1 ; outerItr <= 4 ; outerItr++){
			
			for(int innerItr = 1 ; innerItr <= 4 ; innerItr++ ){
			
				System.out.printf("%d\t",innerItr*2);
			}
			System.out.printf("\n");	
		}

	}	
}	
