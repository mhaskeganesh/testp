
import java.io.*;
class Program {
	public static void main(String[] args) throws IOException {
	
		int n, k = 0, a, d;
		InputStreamReader inp = new InputStreamReader(System.in);
		BufferedReader br = new BufferedReader(inp);
		System.out.printf("Starting element :");
		a = Integer.parseInt(br.readLine());
		System.out.printf("Number of element :");
		n = Integer.parseInt(br.readLine());
		System.out.printf("Common difference :");
		d = Integer.parseInt(br.readLine());
		System.out.printf("The AP is : ");
		while(k < n) {
			System.out.printf("%d ",(a + k * d));
			k++;
		}
		System.out.printf("\n");
	}
}