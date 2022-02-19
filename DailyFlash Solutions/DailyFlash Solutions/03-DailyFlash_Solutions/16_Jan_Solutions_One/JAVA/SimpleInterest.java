/*
Program 2: Write a Program to calculate Simple Interest. Taking all essential
terms to compute as input.
*/

import java.io.BufferedReader;
import java.io.InputStreamReader;
import java.io.IOException;

class SimpleInterest{
	
	
	public static void main(String args[])throws IOException{
		
		BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
		System.out.println("Enter the principal amount");
		long principal_amount = Long.parseLong(br.readLine());
		System.out.println("Enter the rate");
		int rate = Integer.parseInt(br.readLine());
		System.out.println("Enter the time(Year)");
		int time = Integer.parseInt(br.readLine());

		System.out.printf("Simple Interest = %d",(principal_amount*rate*time)/100);
			
		

	}	

}	
