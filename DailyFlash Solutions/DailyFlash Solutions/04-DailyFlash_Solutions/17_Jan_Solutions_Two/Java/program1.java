
import java.io.*;

class Memory {

	static public void main(String ... kbd) throws IOException {
	
		float r;
		System.out.printf("Enter radius : ");
		BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
		r = Float.parseFloat(br.readLine());

		if(r >= 0)
			System.out.printf("Area of circle : %f \n", 3.14 * r * r);
		else
			System.out.printf("radius can't be negative\n");
		return;
	}
}
