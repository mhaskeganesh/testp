/*
 
Program 4 : Write a Progr am to accept 10 integers from user and prin t s the
sum & average of entered numbers .
Input: 1 2 3 4 5 6 7 8 9 10
Output:
Sum of 10 entered Number is: 55
Average of 10 entered number is: 5.55

*/

import java.io.*;

class SumOf10{
	
	public static void main(String args[])throws IOException{
		
		int num;
		int sum=0;
		BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
		System.out.println("Enter the 10 numbers");

		for(int i = 0; i<10; i++ ){
			
			num = Integer.parseInt(br.readLine());
			sum = sum + num;
		}	

		System.out.println("Sum of 10 entered Number is : "+sum);
		System.out.println("Average of 10 entered number is : "+(float)sum/10);
	}	
}	
