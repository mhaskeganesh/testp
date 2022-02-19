/*

Program 3: Write a Program to Find whether the character is an alphabet, a
digit or a special character
Input: *
Output: * is a Special Character.

*/



class CheckCharacter{
	
	public static void main(String args[]){
	
		char ch= '@';

        	if((ch>=65&&ch<=90)||(ch>=97&&ch<=122))
                	System.out.println(ch+" is alphabet");
        	else if(ch>=48&&ch<=57)
                	System.out.println(ch+" is digit");
        	else
                	System.out.println(ch+" is special char");



	}	

}	
