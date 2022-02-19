
import java.io.*;

class Program {
	public static void main(String ... st) throws IOException{

		float a,r,b;
		System.out.printf("Enter angle in degree and radius\n");
		BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
		a = Float.parseFloat(br.readLine());
		b = Float.parseFloat(br.readLine());
		r = Float.parseFloat(br.readLine());
		a = (float)(3.142 * (a / 180));
		b = (float)(3.142 * (b / 180));
	
		System.out.printf("x : %f\n", r * Math.cos(b) * Math.sin(a));
		System.out.printf("y : %f\n", r * Math.sin(a)* Math.sin(b));
		System.out.printf("z : %f\n", r * Math.cos(a));
	}
}
