import java.io.*;
import java.util.*;

class ArrayOps{

	public static void main(String ... nk)throws IOException{

		BufferedReader br = new BufferedReader(new InputStreamReader(System.in));

		System.out.println("Enter the length of array : ");
		int n = Integer.parseInt(br.readLine());
		int arr[] = new int[n];
		
		for(int i=0; i<n; i++)
			arr[i]=Integer.parseInt(br.readLine());

		Arrays.sort(arr);

		for(int i=0; i<n; i++)
			System.out.print(arr[i]+"\t");
	}


}
