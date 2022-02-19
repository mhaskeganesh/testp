
import java.io.*;
class Program {
	public static void main(String[] args) throws IOException {
	
		int n, k = 0, a, d;
		InputStreamReader inp = new InputStreamReader(System.in);
		BufferedReader br = new BufferedReader(inp);
		System.out.printf("Ending element :");
		a = Integer.parseInt(br.readLine());
		System.out.printf("Common difference :");
		d = Integer.parseInt(br.readLine());

		while(a > 0) {
			System.out.print(a + " ");
			a = a - d;
		}
		System.out.println();
	}
}
