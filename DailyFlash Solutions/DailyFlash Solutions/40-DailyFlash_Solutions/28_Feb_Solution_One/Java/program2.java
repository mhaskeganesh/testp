
import java.io.*;
class Program {
	public static void main(String ... kanif) throws IOException  {

		BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
		float n;
		System.out.printf("Enter Circumference : ");
		n = Float.parseFloat(br.readLine());
		System.out.printf("Diameter : %funits\n", (n / 3.142));

	}
}
