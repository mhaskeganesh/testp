/*
Program 5: Write a Program to take marks of five subjects Physics, Chemistry,
Biology, Mathematics and Computer. Calculate percentage and grade
according to following:
Percentage >= 90% : Grade A
Percentage >= 80% : Grade B
Percentage >= 70% : Grade C
Percentage >= 60% : Grade D
Percentage >= 40% : Grade E
Percentage < 40% : Grade F

*/

import java.io.*;


class Grade{
	
	public static void main(String args[]) throws IOException{
		
		BufferedReader br = new BufferedReader(new InputStreamReader(System.in));

		float farray[] = new float[5];
		
		System.out.println("Enter the marks of 5 subjects(phy,chem,bio,math,com)");
		
		String marks = br.readLine();
		String marksList[] = marks.split(" ");

		for(int i = 0;i < farray.length;i++ ){
			
			farray[i]=Float.parseFloat(marksList[0]);

		}

		float percent = ((farray[0]+farray[1]+farray[2]+farray[3]+farray[4])/500)*100;		

		if(percent>=90)
			System.out.printf("Grade A");
		else if(percent>=80)
			System.out.printf("Grade B");
		else if(percent>=70)
			System.out.printf("Grade C");
		else if(percent>=60)
			System.out.printf("Grade D");
		else if(percent>=40)
			System.out.printf("Grade E");
		else if(percent<40)
			System.out.printf("Grade f");	

	}	
}	
