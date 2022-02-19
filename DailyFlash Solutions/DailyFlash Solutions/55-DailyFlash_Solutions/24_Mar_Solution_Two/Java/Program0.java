import java.io.*;

class Program0 {


	public static void main(String[] args) throws IOException {

		BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
		float sum = 0;
		int l = 0;
		System.out.printf("Enter The Length of the Series\n");

		l = Integer.parseInt(br.readLine());


		for(int i = 0; i < l; i++)
			sum+=(i*3.14f)/6;
		System.out.println("Sum of Series = "+String.format("%.2f",(float)sum));
	}
}
