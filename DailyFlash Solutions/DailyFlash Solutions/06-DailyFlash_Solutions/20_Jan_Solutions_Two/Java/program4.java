
import java.io.*;

class Thrashing {
	public static void main(String ... kbd) throws IOException {
		int arr[] = new int[10];
		float sum = 0;
		BufferedReader br = new BufferedReader(new InputStreamReader(System.in));

		System.out.printf("Enter Numbers : \n");
		for(int i = 0; i< 10; i++){
			arr[i] = Integer.parseInt(br.readLine());
			sum = sum + arr[i];
		}

		System.out.printf("Sum : %d\n", (int)(sum));
		System.out.printf("Average : %f\n", (sum / 10));
	}
}
