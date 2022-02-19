import java.io.*;

class Program {
	public static void main(String[] args) throws IOException {

		int m = 3,n = 3,sum = 0;
		System.out.printf("Row and Column : \n");
		InputStreamReader inp = new InputStreamReader(System.in);
		BufferedReader br =  new BufferedReader(inp);
		m = Integer.parseInt(br.readLine());
		n = Integer.parseInt(br.readLine());
	
		int matrix[][] = new int[m][n];
	
		System.out.printf("Enter Matrix 1 : \n");
		for(int i = 0 ; i < m ; i++){
			for(int j = 0 ; j < n ; j++){
				matrix[i][j] = Integer.parseInt(br.readLine());
			}
		}
		System.out.print("Sum of All Rows : ");
		for(int i = 0 ; i < m ; i++){
			sum = 0;
			for(int j = 0 ; j < n ; j++){
				sum += matrix[i][j];
			}
			System.out.print(sum + " ");
		}
		System.out.print("\nSum of All Columns : ");
		for(int i = 0 ; i < n ; i++){
			sum = 0;
			for(int j = 0 ; j < m; j++){
				sum += matrix[j][i];
			}
			System.out.print(sum + " ");
		}
		System.out.println();
	}

}
