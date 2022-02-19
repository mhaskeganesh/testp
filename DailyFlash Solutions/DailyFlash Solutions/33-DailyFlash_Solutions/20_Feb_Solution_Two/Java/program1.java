
import java.io.*;

class Program {
	public static void main(String ... st) throws IOException{

		float a,r;
		System.out.printf("Enter angle in degree and radius\n");
		BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
		a = Float.parseFloat(br.readLine());
		r = Float.parseFloat(br.readLine());
		a = (float)(3.142 * (a / 180));
	
		System.out.printf("x : %f\n", r * Math.cos(a));
		System.out.printf("y : %f\n", r * Math.sin(a));
	}
}
