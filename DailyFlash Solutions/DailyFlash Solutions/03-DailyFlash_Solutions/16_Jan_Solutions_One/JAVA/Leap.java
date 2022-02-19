/*
Program 3: Write a Program to check if a year is leap year or not.
{Note: If a year is divisible by 4 then it is leap year but if the year is century
year like 2000, 1900, 2100 then it must be divisible by 400}
*/


import java.io.BufferedReader;
import java.io.InputStreamReader;
import java.io.IOException;

class LeapYear{
	
	public static void main(String args[])throws IOException{
		
		BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
		try{
			int year = Integer.parseInt(br.readLine());
		
			if(year%4==0){
			
				if(year%100==0 && year%400!=0){
					System.out.println("Is not leap year");
				}else{
					System.out.println("Is leap year");
				}	
			}else{
				System.out.println("Is not leap year");
			}	
		}catch(NumberFormatException exception){
			
			System.out.println("Format Error : Accept only one value in String giving two:");
		}	
		

	}	

}	




