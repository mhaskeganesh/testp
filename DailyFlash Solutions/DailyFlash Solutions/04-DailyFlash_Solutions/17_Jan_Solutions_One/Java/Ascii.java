/*
Program 5: Write a program to ASCII values of input character.
Input: A
Output: ASCII Value of A is 65

*/


import java.io.*;


class Ascii{
	
	public static void main(String args[])throws IOException{
		
		BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
		int input;
		System.out.printf("Enter the character\n");
		input =(char) br.read();

		System.out.printf("Ascii value of %c is %d",input,input);
	}	
}	

