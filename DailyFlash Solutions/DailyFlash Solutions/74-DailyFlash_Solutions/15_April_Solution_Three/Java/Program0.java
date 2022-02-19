import java.io.*;
import java.util.*;

class ArrayOps{

	public static void main(String ... args)throws IOException{

		BufferedReader br = new BufferedReader(new InputStreamReader(System.in));

		System.out.println("Enter No of Elements : ");
		int m = Integer.parseInt(br.readLine());

		int arr1[] = new int[m];
		int arr2[] = new int[m];
		int arr3[] = new int[m*2];


		System.out.println("Enter Elements For Array 1");
		for(int i=0; i<m; i++){

			arr1[i] = Integer.parseInt(br.readLine());
		}

		System.out.println("Enter Elements For Array 2");
		for(int i=0; i<m; i++){

			arr2[i] = Integer.parseInt(br.readLine());
		}

		for(int i = 0; i < m; i++){

			arr3[i] = arr1[i];
			arr3[m+i] = arr2[i];
		}

		System.out.printf("After Concatenation Third array is\n");
		for(int i=0; i<2*m; i++){

			System.out.printf("%d\t",arr3[i]);

		}
		System.out.println();
		
		for(int i=0; i<2*n; i++){
		for(int j=0; j<2*n; j++){
		
			if(arr3[j] < arr3[i]){

				int temp = arr3[i];
				arr3[i] = arr3[j];
				arr3[j] = temp;
			}
		}
	}

System.out.printf("After Concatenation and Sorting Third array is\n");
		for(int i=0; i<2*m; i++){

			System.out.printf("%d\t",arr3[i]);

		}
		System.out.println();

	}
}
