/*
Program 2 : Write a Program that accepts an integer from user and print Sum of
all number up to entered number .
Input: 10
Output: The sum number up to 10 : 55
*/

import java.io.*;


class SumUptoq{
	
	public static void main(String args[])throws IOException{

		int num;
		System.out.println("Enter the number");
		BufferedReader br =  new BufferedReader(new InputStreamReader(System.in));

		num = Integer.parseInt(br.readLine());
		int sum = 0 ;
		for(int i=1;i<=num;i++){

			sum = sum + i;
	
		}

		System.out.println("The Sum Number upto "+num+" : "+sum);

	}	

}	
