import  java.io.*;

class Program {
	public static void main(String ... kanif) throws IOException { 

		int n;
		System.out.printf("Enter Length of Array : ");
		BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
		n = Integer.parseInt(br.readLine());
		int arr[] = new int[n];
		int max = Integer.parseInt(br.readLine());
		arr[0] = max;

		for(int i = 1; i<n; i++) {
			
			arr[i] = Integer.parseInt(br.readLine());
			if(max < arr[i])
				max = arr[i];
		}
		System.out.println("Max : " + max);
	}
}
