/*
Program 5: Write a Program to Find Maximum between three numbers
Input: 1 4 2
Output: 4 is Max number among 1, 4 & 2 

 */

/** DEFINATION OF CLASS MAXIMUM_AMONG_THREE*/
class MaximumAmongThree{

	/** DEFINATION OF THE MAIN FUNCTION*/
	public static void main(String args[]){


		int a=10000,b=200,c=3000;
		

		if(a > b && a> c){
			
			System.out.println("a is greater then b and c");
		}//END OF IF
		else if (b>a && b>c){
			System.out.println("b is greater then a and c");
		}//END OF ELSE IF
		else if (c>a && c>b){
			System.out.println("c is greater then b and a");
		}//END OF ELSE IF	



	}//END OF MAIN FUNCTION

}//END OF CLASS MAXIMUM_AMONG_THREE	
