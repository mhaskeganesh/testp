import java.io.*;

class Program2 {


	public static void main(String[] args) throws IOException {

		BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
		int max = 0;
		int l = 0;
		System.out.printf("Enter Number of Elements\n");

		l = Integer.parseInt(br.readLine());
		int arr[] = new int[l];

		System.out.printf("Enter Array Elements\n");
		for(int i = 0; i < l; i++){
			arr[i] = Integer.parseInt(br.readLine());
			if(max < arr[i])
				max = arr[i];
		}

		System.out.printf("Maximum Element in array is %d\n",max);

	}
}
