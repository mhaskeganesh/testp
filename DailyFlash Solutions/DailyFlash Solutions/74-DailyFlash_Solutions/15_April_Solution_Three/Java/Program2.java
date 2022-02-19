import java.io.*;
import java.util.*;

class ArrayOps{

	public static void main(String ... args)throws IOException{

		BufferedReader br = new BufferedReader(new InputStreamReader(System.in));

		System.out.println("Enter Number of Rows : ");
		int m = Integer.parseInt(br.readLine());

		System.out.println("Enter Number of Columns : ");
		int n = Integer.parseInt(br.readLine());

		int matrix[][] = new int[m][n];
		int rows[] = new int[m];
		int cols[] = new int[n];

		int sum = 0;

	for(int i=0; i<n; i++){

		System.out.println("Enter Elements For Row "+i);
		for(int j=0; j<n; j++)
			matrix[i][j] = Integer.parseInt(br.readLine());
	}


	for(int i = 0;i < m; i++){

		for(int j=0;j<n;j++){

			sum+=matrix[i][j];
		}
		rows[i] = sum;
		sum = 0;
	}


	for(int i = 0;i < n; i++){

		for(int j=0;j<m;j++){

			sum+=matrix[j][i];
		}
		cols[i] = sum;
		sum = 0;
	}

	System.out.printf("Sum of Elements in Rowss\n");
	for(int i = 0;i < m; i++){

		System.out.printf("%d\t",rows[i]);
	}
	System.out.printf("\n");

	System.out.printf("Sum of Elements in Columns\n");
	for(int i = 0;i < m; i++){

		System.out.printf("%d\t",cols[i]);
	}
	System.out.printf("\n");


	
	}
}
