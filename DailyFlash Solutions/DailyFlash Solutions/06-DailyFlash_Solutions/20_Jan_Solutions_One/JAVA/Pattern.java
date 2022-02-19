/*
Program 5: Write a Program to print following Pattern.
Output:
0
1 0
1 0
1 0
1
0 0 0 0
1 1 1 1

*/

class Pattern{
	
	public static void main(String args[]){
		
		for(int outritr = 0 ; outritr < 4 ; outritr++ ){

			for(int inneritr = 0 ; inneritr < 4 ; inneritr++ ){

				if(outritr%2==0){  
					System.out.printf("0 ");
				}else{
					System.out.printf("1 ");
				}
			}
			System.out.printf("\n");
		}
	}	
}	
