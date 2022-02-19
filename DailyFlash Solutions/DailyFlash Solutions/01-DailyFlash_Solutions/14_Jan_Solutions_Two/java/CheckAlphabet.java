
/*

Program 1: Write a Program to check whether the Character is Alphabet or
not.
Input: v
Output: v is an alphabet.

*/


class CheckAlphabet{

	
	public static void main(String args[]){
		
		char ch = '*';

        	if((ch>=65&&ch<=90)||(ch>=97&&ch<=122))
                	System.out.printf("%c is an alphabet",ch);
        	else
                	System.out.printf("%c is not an alphabet",ch);

	}	

}	
