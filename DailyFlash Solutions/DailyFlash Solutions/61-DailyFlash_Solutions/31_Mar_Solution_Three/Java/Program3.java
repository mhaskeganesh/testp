import java.util.*;

class Program3{


	public static void main(String[] args){
	
		int row,col,len;
		Scanner sc = new Scanner(System.in);

		col = sc.nextInt();
		row=2*col-1;

		for(int i=0; i<row; i++){
			for(int j=0; j<col; j++){
					if(i+j>=row/2 && i-j<=row/2){
							System.out.print(i+""+j+"\t");
					}
					else
						System.out.print("\t");
			}
			System.out.println();
		}
	}
}
