
import java.io.*;

class Program {

	public static void main (String ... k) throws IOException {
		
		int n;
		System.out.printf("Enter Length Of Array : ");
		BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
		n = Integer.parseInt(br.readLine());

		int []arr1 = new int[n];
		int []arr2 = new int[n];

		System.out.printf("Enter Array : \n");
		for(int i = 0 ; i < n ; i++ ){
			arr1[i] = Integer.parseInt(br.readLine());
		}
		System.out.printf("Enter Array : \n");
		for(int i = 0 ; i < n ; i++ ){
			arr2[i] = Integer.parseInt(br.readLine());
		}

		System.out.printf("Array : \n");
		for(int i = 0 ; i < n ; i++ ){
			arr1[i] = arr1[i] * arr2[i];
			System.out.printf("%d ", arr1[i]);
		}
		System.out.printf("\n");
	}
}
