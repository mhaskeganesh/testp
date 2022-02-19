/*
Program 4: Write a Program to Print following Pattern
1  2  3  4
5  6  7  8
9  10 11 12
13 14 15 16
*/


class Pattern{

	public static void main(String args[]){

		int display = 0;
		for(int outerItr = 1 ; outerItr <= 4 ; outerItr++){

			for(int innerItr = 1 ; innerItr <= 4 ; innerItr++){

				System.out.printf("%d\t",++display);

			}
			System.out.printf("\n");
		}

	}	
}	
