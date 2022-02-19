
import java.io.*;
class Program {
	public static void main(String ... kanif) throws IOException  {

		BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
		float n;
		System.out.printf("Enter Area : ");
		n = Float.parseFloat(br.readLine());
		System.out.printf("Radius : %funits\n", Math.sqrt(n / 3.142));

	}
}