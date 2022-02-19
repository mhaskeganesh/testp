/*Program 4: Write a Program that accepts an integer from user and print table
of that number.
Input: 4
Output: 4 8 12 16 20 24 28 36 40*/

import java.io.*;

class TableOf{
	
	public static void main(String args[])throws IOException{
		
		int num;

		BufferedReader br  = new BufferedReader(new InputStreamReader(System.in));
		
		num = Integer.parseInt(br.readLine());

		for(int itr = 1 ;itr <= 10 ; itr++){

			System.out.printf("%d \n",itr*num);
		}	

	}	
}	
