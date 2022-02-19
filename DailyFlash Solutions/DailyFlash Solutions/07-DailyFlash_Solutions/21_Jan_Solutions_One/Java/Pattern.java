/*Program 5 : Write a Program to print following Pattern.
Output :
0
0 0 
0 0 0
0 0 0 0*/


class Pattern{

	public static void main(String args[]){

		for(int outeritr = 0 ; outeritr < 4 ; outeritr++){
		
			for(int inneritr =  0 ; inneritr <=outeritr ; inneritr++){
			
				System.out.printf("0 ");
			}	
			System.out.printf("\n");
		}

	}	
}	
