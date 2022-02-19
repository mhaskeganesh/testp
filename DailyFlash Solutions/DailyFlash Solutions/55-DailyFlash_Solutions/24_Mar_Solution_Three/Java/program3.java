import java.io.*;
class Program {
	public static void main(String[] args) throws IOException{
		int n;
		System.out.printf("Enter length  of Array : ");
		BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
		n = Integer.parseInt(br.readLine());

		int arr[] = new int[n];
		arr[0] = Integer.parseInt(br.readLine());
		int max = arr[0];
		for(int i =  1; i < n ; i++){
			arr[i] = Integer.parseInt(br.readLine());

			if(max > arr[i])
				max = arr[i];
		}
		System.out.printf("Min : %d\n", max);
	}
}