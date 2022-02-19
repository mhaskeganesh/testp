/*
Program 2: Write a program that takes electricity unit charges as input and
calculate total electricity bill according to the given condition:
For first 50 units Rs. 0.50/unit
For next 100 units Rs. 0.75/unit
For next 100 units Rs. 1.20/unit
For unit above 250 Rs. 1.50/unit.

*/

import java.io.*;


class Electricity{
	

	public static void main(String args[])throws IOException{
		
		
		BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
		System.out.println("Enter the electricity unit\n");

		int unit=Integer.parseInt(br.readLine());
		
		if(unit<=50){

			System.out.printf("Electricity charge %f",unit*0.50);

		}else if(unit<=150){


			System.out.printf("Electricity charge %f",unit*0.75);

		}else if(unit<=250){

			System.out.printf("Electricity charge %f",unit*1.20);
		}else{

			System.out.printf("Electricity charge %f",unit*1.50);
		}

	}
}	
