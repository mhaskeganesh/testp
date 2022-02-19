import java.io.*;
class Program {
	public static void main(String[] args) throws IOException{

		float len;
		System.out.printf("Enter length in metre\n");
		BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
		len = Float.parseFloat(br.readLine());
		System.out.printf("Period of that pendulum is : %f seconds\n", (2*3.142)/Math.sqrt(len/9.81));
		
		return;
	}
}