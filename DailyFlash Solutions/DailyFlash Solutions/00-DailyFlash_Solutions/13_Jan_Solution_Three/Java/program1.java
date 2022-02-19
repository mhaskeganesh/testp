
import java.io.*;
class Program {
	public static void main(String [] kbd) throws IOException {

		int a, b;
		BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
		System.out.println("Enter Numbers :");
		a = Integer.parseInt(br.readLine());
		b = Integer.parseInt(br.readLine());

		System.out.println(((a >= b)? a : b) + " is max Number among " + a + " and " + b );

	}
}
