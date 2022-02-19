/*
 
Program 5: Write a Program to check whether the number is divisible by 5 &
11 or not.
Input: 55
Output: 55 is divisible by 5 & 11.


 */


class DivisibleBy5And11{
	
	public static void main(String[] args){

		int num = 55;
		if(num%5==0&&num%11==0)
			System.out.println(num+" is divisible by 5 and 11");
		else
			System.out.println(num+" is not divisible by 5 and 11");	
	}	

}	
