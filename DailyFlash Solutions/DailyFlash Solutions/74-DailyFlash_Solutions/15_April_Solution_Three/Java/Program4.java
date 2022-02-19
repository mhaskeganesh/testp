import java.io.*;
import java.util.*;

class ArrayOps{

	public static void main(String ... args)throws IOException{

		BufferedReader br = new BufferedReader(new InputStreamReader(System.in));

		System.out.println("Enter order of Martix : ");
		int n = Integer.parseInt(br.readLine());

		int matrix[][] = new int[n][n];
		int matrix1[][] = new int[n][n];
		int matrix3[][] = new int[n][n];


		System.out.println("Enter for Matrix 1: ");
		for(int i=0; i<n; i++){

			System.out.println("Enter Elements For Row "+i);
			for(int j=0; j<n; j++)
				matrix[i][j] = Integer.parseInt(br.readLine());
		}


		System.out.println("Enter for Matrix 2: ");
		for(int i=0; i<n; i++){

			System.out.println("Enter Elements For Row "+i);
			for(int j=0; j<n; j++)
				matrix1[i][j] = Integer.parseInt(br.readLine());
		}


		for(int i=0;i<n;i++){
			for(int j=0;j<n;j++){

				matrix3[i][j] = matrix[i][j] + matrix1[i][j];

			}
		}
		
		for(int i=0;i<n;i++){
			for(int j=0;j<n;j++){

				System.out.print(matrix3[i][j]+"\t");
			}
			System.out.println();
		}

	}
}
