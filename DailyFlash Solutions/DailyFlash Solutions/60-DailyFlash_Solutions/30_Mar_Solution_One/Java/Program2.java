import java.io.*;

class Program2 {


	public static void main(String[] args) throws IOException {

		BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
		int l = 0,prod = 1;
		System.out.printf("Enter Number of Elements\n");

		l = Integer.parseInt(br.readLine());
		int arr[] = new int[l];

		System.out.printf("Enter Array Elements\n");
		for(int i = 0; i < l; i++){
			arr[i] = Integer.parseInt(br.readLine());
		}
	
		for(int i = 0; i < l; i++)
		if (arr[i]%2 != 0)
			prod*=arr[i];

		System.out.println("Product of Odd elements in the array is "+prod);

	}
}
