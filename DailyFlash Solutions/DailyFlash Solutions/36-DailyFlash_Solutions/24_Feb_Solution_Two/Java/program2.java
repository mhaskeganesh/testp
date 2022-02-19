
import java.io.*;
class Program {
	public static void main(String ... kbd) throws IOException{
		float n;
		System.out.printf("Enter Number : ");
		BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
		n = Float.parseFloat(br.readLine());
		float g1, g2, e;
		g1 = (float)(n / 2);
		e = 0.1f;
		while((float)(Math.abs(g1*g1 - n)) > e){
			g2 = (float)(n / g1);
			g1 = (float)((g1 + g2 )/2);
		}
		System.out.printf("Square root : %f\n", g1);
	}

}