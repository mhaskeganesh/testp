import java.io.*;
import java.util.*;

class ArrayOps{

	public static void main(String ... nk)throws IOException{

		BufferedReader br = new BufferedReader(new InputStreamReader(System.in));

		System.out.println("Enter the length of array : ");
		int n = Integer.parseInt(br.readLine());
		int arr1[] = new int[n];
		int arr2[] = new int[n];
		int arr3[] = new int[n];
		
		System.out.println("Enter Elements For Array 1");
		for(int i=0; i<n; i++)
			arr1[i]=Integer.parseInt(br.readLine());
		
		System.out.println("Enter Elements For Array 1");
		for(int i=0; i<n; i++)
			arr1[i]=Integer.parseInt(br.readLine());

		System.out.println("After Operations Elements in third array are ");
		for(int i=0; i<n; i++){
			arr3[i] = arr2[i]*arr1[i];
			System.out.print(arr3[i]+"\t");
		
		}
	
	}
}
