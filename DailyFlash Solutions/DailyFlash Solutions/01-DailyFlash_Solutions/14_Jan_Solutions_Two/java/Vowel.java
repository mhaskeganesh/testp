/*
 
Program 2: Write a Program to check whether the Character is Vowel or
Consonant.
Input: E
Output: E is a Vowel.

 
 */


class VowelCheck{

	public static void main(String args[]){

		char ch = 'E';

        	switch(ch){
                	case 'a':
                	case 'e':
                	case 'i':
                	case 'o':
                	case 'u':
                	case 'A':
                	case 'E':
                	case 'I':
                	case 'O':
                	case 'U':
                        	System.out.printf("%c is vowel",ch);
                        	break;
                	default :
                        	System.out.printf("%c is consonant",ch);
        	}


	
	}	

}	
