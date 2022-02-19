/*
Program 1: Write a program that accepts an integer from user and print it.
Input: 11
Output: 11

*/

import java.io.*;

class Print{
	
	public static void main(String args[])throws IOException{
		
		BufferedReader br =new BufferedReader(new InputStreamReader(System.in));
		int num;
		System.out.println("Enter the Integer");
		num = Integer.parseInt(br.readLine());

		System.out.println(num);
	

	}	
}	
