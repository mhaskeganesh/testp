import java.io.*;
class Program {
	public static void main(String[] args) throws IOException{
			
		int b, h;
		float area;
		System.out.printf("Enter height and base\n");
		BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
		h = Integer.parseInt(br.readLine());
		b = Integer.parseInt(br.readLine());
		area = 0.5f * b * h;
		System.out.printf("Area : %f\n", area);
	}
}