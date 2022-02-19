import java.io.*;

class Program {
	public static void main(String[] args) throws IOException{

		int m = 3,n = 3, flag = 0;
		System.out.printf("Row and Column : \n");
		InputStreamReader inp = new InputStreamReader(System.in);
		BufferedReader br =  new BufferedReader(inp);
		m = Integer.parseInt(br.readLine());
		n = Integer.parseInt(br.readLine());
		int matrix[][] = new int[m][n];
		int arr[][] = new int[m][n];

		System.out.printf("Enter Matrix 1 : \n");
		for(int i = 0 ; i < m ; i++){
			for(int j = 0 ; j < n ; j++){
				matrix[i][j] = Integer.parseInt(br.readLine());
			}
		}
		System.out.printf("Enter Matrix 2 : \n");
		for(int i = 0 ; i < m ; i++){
			for(int j = 0 ; j < n ; j++){
				arr[i][j] = Integer.parseInt(br.readLine());	
			}
		}
		for(int i = 0 ; i < m ; i++){
			for(int j = 0 ; j < n ; j++){
				System.out.print((matrix[i][j] = matrix[i][j] + arr[i][j]) + " ");
			}
			System.out.println();
		}
	}
}
