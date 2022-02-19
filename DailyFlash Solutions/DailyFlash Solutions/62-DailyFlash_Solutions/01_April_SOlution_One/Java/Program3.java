import java.util.*;

class Pattern{


	public static void main(String ... nk){
	
		int row,col,len;
		Scanner sc = new Scanner(System.in);

		col = sc.nextInt();
		row=2*col-1;

		char ch ='A';

		for(int i=0; i<row; i++){
			for(int j=0; j<col; j++){
					if(i+j>=row/2 && i-j<=row/2){
							System.out.print(ch+"\t");
							ch++;
					}
					else
						System.out.print("\t");
			}
			System.out.println();
		}
	}
}
