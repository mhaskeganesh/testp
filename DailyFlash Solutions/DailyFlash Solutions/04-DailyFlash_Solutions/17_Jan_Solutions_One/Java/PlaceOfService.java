/*Program 3: Ask user to enter age, sex ( M or F ), marital status ( Y or N ) and
then using following rules print their place of service.
if employee is female, then she will work only in urban areas.
if employee is a male and age is in between 20 to 40 then he may work
in anywhere
if employee is male and age is in between 40 t0 60 then he will work in
urban areas only.
And any other input of age should print "ERROR".*/

import java.io.*;

class PlaceOfService{
	
	public static void main(String args[])throws IOException{
		
		BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
		System.out.println("Enter the age: ");
		int age = Integer.parseInt(br.readLine());
	       	System.out.println("Enter the sex M & F");
		char sex = (char)br.read();
		System.out.print("Enter the marital Status Y and N\r");
		char maritalStatus = (char)br.read();

		if(sex == 'F'&& age <60){
		
			System.out.printf("Work only in urban areas");

		}else if(sex == 'M'){
		
			if(age>=20&&age<=40){

				System.out.printf("may work anywhere");

			}else if(age > 40 && age<=60){
			
				System.out.printf(" will work in urban areas only");
			}	
		}else {
			System.out.printf("ERROR");
		}	

	}	
}	
