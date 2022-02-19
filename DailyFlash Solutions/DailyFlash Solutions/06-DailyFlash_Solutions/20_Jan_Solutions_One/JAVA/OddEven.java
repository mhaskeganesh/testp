/*
Program 3 : Write a Program that accepts a n inte ger from user and prints
whether that number is odd or even .
Input: 2
Output: 2 is an Even Number

*/

import java.io.*;

class OddEven{
	
	public static void main(String args[])throws IOException{

		int num;
		BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
		System.out.println("Enter the number");
		num = Integer.parseInt(br.readLine());


		if(num%2==0){
			System.out.printf("%d is Even Number",num);
		}else{
			System.out.printf("%d is Odd Number",num);
		}
		
	}	
}	
