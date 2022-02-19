import java.io.*;

class Program2 {


	public static void main(String[] args) throws IOException {

		BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
		int min = 999999;
		int l = 0;
		System.out.printf("Enter Number of Elements\n");

		l = Integer.parseInt(br.readLine());
		int arr[] = new int[l];

		System.out.printf("Enter Array Elements\n");
		for(int i = 0; i < l; i++){
			arr[i] = Integer.parseInt(br.readLine());
			if(min > arr[i])
				min = arr[i];
		}

		System.out.printf("Minimum Element in array is %d\n",min);

	}
}
