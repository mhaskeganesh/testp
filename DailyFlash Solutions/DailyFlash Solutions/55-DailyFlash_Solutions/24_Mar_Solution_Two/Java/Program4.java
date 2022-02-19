import java.io.*;

class Program4 {


	public static void main(String[] args) throws IOException {

		BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
		int base = 0,height = 0;
		float area = 0;

		System.out.printf("Enter Base of Triangle\n");
		base = Integer.parseInt(br.readLine());
		
		System.out.printf("Enter height of Triangle\n");
		height = Integer.parseInt(br.readLine());

		area = 0.5f*base*height;
		System.out.printf("Area Of Triangle = %.2f\n",area);
		
	}
}



